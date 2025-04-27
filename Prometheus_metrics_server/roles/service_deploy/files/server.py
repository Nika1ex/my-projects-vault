import os  # Работа с операционной системой (файлы, пути и т.д.)
import time  # Работа со временем (задержки, таймеры)
from prometheus_client import (
    start_http_server,
    Gauge,
)  # Импорт функций и классов для Prometheus метрик
import platform  # Информация о платформе (ОС, архитектура)
import subprocess  # Запуск внешних системных команд
import sys  # Взаимодействие с интерпретатором Python (например, выход из программы)

# Создаем метрику типа Gauge с именем "host_type_info" и описанием.
# Метрика имеет метку "type", которая будет содержать тип хоста (physical, vm, container и т.д.)
HOST_TYPE = Gauge(
    "host_type_info", "Type of host where the server is running", ["type"]
)


def detect_host_type():
    """
    Определяет тип хоста, на котором запущено приложение:
    - container (контейнер)
    - vm (виртуальная машина)
    - physical (физический сервер)
    """

    # Проверяем наличие файла /.dockerenv - индикатор Docker-контейнера
    if os.path.exists("/.dockerenv"):
        return "container"

    # Пытаемся прочитать /proc/1/cgroup и проверить наличие признаков контейнеризации
    try:
        with open("/proc/1/cgroup", "r") as f:
            cgroup_content = f.read()
            # Если в содержимом встречаются ключевые слова, связанные с контейнерами
            if any(
                container_tech in cgroup_content
                for container_tech in ["docker", "lxc", "kubepods", "containerd"]
            ):
                return "container"
    except (IOError, FileNotFoundError):
        # Если файл не найден или ошибка чтения - игнорируем
        pass

    # Проверяем название продукта оборудования на признаки виртуализации
    try:
        with open("/sys/class/dmi/id/product_name", "r") as f:
            product_name = f.read().strip().lower()
            # Если в названии встречаются слова, указывающие на виртуализацию
            if any(
                vm_tech in product_name
                for vm_tech in ["vmware", "virtual", "kvm", "hvm", "xen"]
            ):
                return "vm"
    except (IOError, FileNotFoundError):
        pass

    # Анализируем содержимое /proc/cpuinfo на признаки виртуализации процессора
    try:
        with open("/proc/cpuinfo", "r") as f:
            cpuinfo = f.read().lower()
            if any(vm_flag in cpuinfo for vm_flag in ["hypervisor", "vmx", "svm"]):
                return "vm"
    except (IOError, FileNotFoundError):
        pass

    # Если система Linux, пытаемся определить виртуализацию через системные утилиты
    if platform.system() == "Linux":
        try:
            # Запускаем systemd-detect-virt, которая возвращает тип виртуализации или "none"
            virt_check = subprocess.run(
                ["systemd-detect-virt"],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
            )
            if virt_check.returncode == 0 and virt_check.stdout.strip() != "none":
                return "vm"
        except (FileNotFoundError, subprocess.SubprocessError):
            # Если команда не найдена или ошибка - игнорируем
            pass

        try:
            # Запускаем virt-what, которая возвращает информацию о виртуализации
            virt_what = subprocess.run(
                ["virt-what"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
            )
            if virt_what.returncode == 0 and virt_what.stdout.strip():
                return "vm"
        except (FileNotFoundError, subprocess.SubprocessError):
            pass

    # Если ни один из способов не выявил виртуализацию или контейнер - считаем физическим сервером
    return "physical"


def update_host_type_metric():
    """
    Обновляет метрику HOST_TYPE, устанавливая значение 1 для текущего типа хоста,
    и 0 для остальных.
    """

    host_type = detect_host_type()  # Определяем текущий тип хоста

    # Сбрасываем все метки к 0, чтобы не было "зависших" значений
    for type_name in ["physical", "vm", "container", "unknown"]:
        HOST_TYPE.labels(type=type_name).set(0)

    # Устанавливаем 1 для метки, соответствующей текущему типу хоста
    HOST_TYPE.labels(type=host_type).set(1)


def main():
    port = 8080  # Порт для HTTP-сервера метрик

    print(f"Starting Prometheus metrics server on port {port}")
    start_http_server(port)  # Запускаем HTTP-сервер Prometheus

    update_host_type_metric()  # Обновляем метрику с текущим типом хоста

    print(f"Server started successfully. Metrics available at http://localhost:{port}")
    print("Host type detected as:", detect_host_type())

    try:
        while True:
            time.sleep(60)  # Ждем 60 секунд, чтобы сервер продолжал работать
    except KeyboardInterrupt:
        # При нажатии Ctrl+C корректно завершаем работу
        print("Server shutting down")
        sys.exit(0)


# Запуск программы, если скрипт выполняется напрямую
if __name__ == "__main__":
    main()
