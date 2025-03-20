## Part 1. Готовый докер

Проект выполнен на ОС **Ubuntu 24.04.2 LTS**.

##### Возьми официальный докер-образ с **nginx** и выкачай его при помощи `docker pull`.

![img](attachments/1.1.png)

##### Проверь наличие докер-образа через `docker images`.

![img](attachments/1.2.png)

##### Запусти докер-образ через `docker run -d [image_id|repository]`.

![img](attachments/1.3.png)

##### Проверь, что образ запустился через `docker ps`.

![img](attachments/1.4.png)

##### Посмотри информацию о контейнере через `docker inspect [container_id|container_name]`.

![img](attachments/1.5.1.png)
![img](attachments/1.5.2.png)
![img](attachments/1.5.3.png)
![img](attachments/1.5.4.png)
![img](attachments/1.5.5.png)
![img](attachments/1.5.6.png)

##### По выводу команды определи и помести в отчёт размер контейнера, список замапленных портов и ip контейнера.

Размер контейнера:  191 999 735 байт + 1095 байт = 192 000 830 байт.

![img](attachments/1.6.1.png)

Замапленных портов нет.

![img](attachments/1.6.2.png)

IP контейнера: 172.17.0.2.

![img](attachments/1.6.3.png)

##### Останови докер контейнер через `docker stop [container_id|container_name]`.

![img](attachments/1.7.png)


##### Проверь, что контейнер остановился через `docker ps`.

![img](attachments/1.8.png)

##### Запусти докер с портами 80 и 443 в контейнере, замапленными на такие же порты на локальной машине, через команду *run*.

![img](attachments/1.9.png)

##### Проверь, что в браузере по адресу *localhost:80* доступна стартовая страница **nginx**.

![img](attachments/1.10.png)

##### Перезапусти докер контейнер через `docker restart [container_id|container_name]`.

![img](attachments/1.11.png)

##### Проверь любым способом, что контейнер запустился.

![img](attachments/1.12.png)

## Part 2. Операции с контейнером

##### Прочитай конфигурационный файл *nginx.conf* внутри докер контейнера через команду *exec*.

![img](attachments/2.1.png)

##### Создай на локальной машине файл *nginx.conf*.

![img](attachments/2.2.png)

##### Настрой в нем по пути */status* отдачу страницы статуса сервера **nginx**.

![img](attachments/2.3.png)

##### Скопируй созданный файл *nginx.conf* внутрь докер-образа через команду `docker cp`.

![img](attachments/2.4.png)

##### Перезапусти **nginx** внутри докер-образа через команду *exec*.

![img](attachments/2.5.png)

##### Проверь, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**.

![img](attachments/2.6.png)

##### Экспортируй контейнер в файл *container.tar* через команду *export*.

![img](attachments/2.7.png)

##### Останови контейнер.

![img](attachments/2.8.png)

##### Удали образ через `docker rmi [image_id|repository]`, не удаляя перед этим контейнеры.

![img](attachments/2.9.png)

##### Удали остановленный контейнер.

![img](attachments/2.10.png)

##### Импортируй контейнер обратно через команду *import*.

![img](attachments/2.11.png)

##### Запусти импортированный контейнер.

Запуск контейнера с **nginx** в режиме foreground:

![img](attachments/2.12.png)

##### Проверь, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**.

![img](attachments/2.13.png)

## Part 3. Мини веб-сервер

##### Напиши мини-сервер на **C** и **FastCgi**, который будет возвращать простейшую страничку с надписью `Hello World!`.

![img](attachments/3.1.png)

##### Запусти написанный мини-сервер через *spawn-fcgi* на порту 8080.

Установка **libfcgi-dev**:

![img](attachments/3.2.png)

Установка **spawn-fcgi**:

![img](attachments/3.3.png)

Сборка и запуск:

![img](attachments/3.4.png)

##### Напиши свой *nginx.conf*, который будет проксировать все запросы с 81 порта на *127.0.0.1:8080*.

![img](attachments/3.5.png)

##### Проверь, что в браузере по *localhost:81* отдается написанная тобой страничка.

![img](attachments/3.6.png)

##### Положи файл *nginx.conf* по пути *./nginx/nginx.conf* (это понадобится позже).

![img](attachments/3.7.png)

#### Напиши свой докер-образ, который:
##### 1) собирает исходники мини сервера на FastCgi из [Части 3](#part-3-мини-веб-сервер);
##### 2) запускает его на 8080 порту;
##### 3) копирует внутрь образа написанный *./nginx/nginx.conf*;
##### 4) запускает **nginx**.

![img](attachments/4.1.png)

##### Собери написанный докер-образ через `docker build` при этом указав имя и тег.

![img](attachments/4.2.png)

##### Проверь через `docker images`, что все собралось корректно.

![img](attachments/4.3.png)

##### Запусти собранный докер-образ с маппингом 81 порта на 80 на локальной машине и маппингом папки *./nginx* внутрь контейнера по адресу, где лежат конфигурационные файлы **nginx**'а (см. [Часть 2](#part-2-операции-с-контейнером)).

![img](attachments/4.4.png)

##### Проверь, что по localhost:80 доступна страничка написанного мини сервера.

![img](attachments/4.5.png)

##### Допиши в *./nginx/nginx.conf* проксирование странички */status*, по которой надо отдавать статус сервера **nginx**.

![img](attachments/4.6.png)

##### Перезапусти докер-образ.

![img](attachments/4.7.png)

##### Проверь, что теперь по *localhost:80/status* отдается страничка со статусом **nginx**

![img](attachments/4.8.png)

## Part 5. **Dockle**

Установка **dockle**:

![img](attachments/5.1.png)

##### Просканируй образ из предыдущего задания через `dockle [image_id|repository]`.

![img](attachments/5.2.png)

##### Исправь образ так, чтобы при проверке через **dockle** не было ошибок и предупреждений.

Исправленный **Dockerfile**:

![img](attachments/5.3.png)

Сборка образа:

![img](attachments/5.4.png)

Проверка образа с помощью **dockle**:

![img](attachments/5.5.png)

Проверка работы веб-сервера:

![img](attachments/5.6.png)

## Part 6. Базовый **Docker Compose**

##### Напиши файл *docker-compose.yml*, с помощью которого:

##### 1) Подними докер-контейнер из [Части 5](#part-5-инструмент-dockle) _(он должен работать в локальной сети, т. е. не нужно использовать инструкцию **EXPOSE** и мапить порты на локальную машину)_.

##### 2) Подними докер-контейнер с **nginx**, который будет проксировать все запросы с 8080 порта на 81 порт первого контейнера.

##### Замапь 8080 порт второго контейнера на 80 порт локальной машины.

Структура файла **docker-compose.yml**:

![img](attachments/6.1.png)

Структура файла **nginx_part6.conf**:

![img](attachments/6.2.png)

##### Останови все запущенные контейнеры.

![img](attachments/6.3.png)

##### Собери и запусти проект с помощью команд `docker-compose build` и `docker-compose up`.

**docker-compose build:**

![img](attachments/6.4.png)

**docker-compose up:**

![img](attachments/6.5.png)

##### Проверь, что в браузере по *localhost:80* отдается написанная тобой страничка, как и ранее.

![img](attachments/6.6.png)


