import os
import time
from prometheus_client import start_http_server, Gauge
import platform
import subprocess
import sys

HOST_TYPE = Gauge(
    "host_type_info", "Type of host where the server is running", ["type"]
)


def detect_host_type():

    if os.path.exists("/.dockerenv"):
        return "container"

    try:
        with open("/proc/1/cgroup", "r") as f:
            cgroup_content = f.read()
            if any(
                container_tech in cgroup_content
                for container_tech in ["docker", "lxc", "kubepods", "containerd"]
            ):
                return "container"
    except (IOError, FileNotFoundError):
        pass

    try:
        with open("/sys/class/dmi/id/product_name", "r") as f:
            product_name = f.read().strip().lower()
            if any(
                vm_tech in product_name
                for vm_tech in ["vmware", "virtual", "kvm", "hvm", "xen"]
            ):
                return "vm"
    except (IOError, FileNotFoundError):
        pass

    try:
        with open("/proc/cpuinfo", "r") as f:
            cpuinfo = f.read().lower()
            if any(vm_flag in cpuinfo for vm_flag in ["hypervisor", "vmx", "svm"]):
                return "vm"
    except (IOError, FileNotFoundError):
        pass

    if platform.system() == "Linux":
        try:
            virt_check = subprocess.run(
                ["systemd-detect-virt"],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
            )
            if virt_check.returncode == 0 and virt_check.stdout.strip() != "none":
                return "vm"
        except (FileNotFoundError, subprocess.SubprocessError):
            pass

        try:
            virt_what = subprocess.run(
                ["virt-what"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
            )
            if virt_what.returncode == 0 and virt_what.stdout.strip():
                return "vm"
        except (FileNotFoundError, subprocess.SubprocessError):
            pass

    return "physical"


def update_host_type_metric():

    host_type = detect_host_type()

    for type_name in ["physical", "vm", "container", "unknown"]:
        HOST_TYPE.labels(type=type_name).set(0)

    HOST_TYPE.labels(type=host_type).set(1)


def main():
    port = 8080
    print(f"Starting Prometheus metrics server on port {port}")
    start_http_server(port)

    update_host_type_metric()

    print(f"Server started successfully. Metrics available at http://localhost:{port}")
    print("Host type detected as:", detect_host_type())

    try:
        while True:
            time.sleep(60)
    except KeyboardInterrupt:
        print("Server shutting down")
        sys.exit(0)


if __name__ == "__main__":
    main()
