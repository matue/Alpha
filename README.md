## Используемое при выполнении задания ПО:

### Библиотеки:

* [python 3.6](https://www.python.org/downloads/release/python-360/)
* [django 2.1.2](https://www.djangoproject.com/download/)
* [Qt 5.11.2](https://www.qt.io/download)

### Среды разработки:

* [Qt Creator 4.7.1](https://www.qt.io/download)
* [Pycharm 2018.1.3](https://www.jetbrains.com/pycharm/)


### СУБД:
* [PostgreSQL 10](https://www.postgresql.org/download/windows/)
* [pgAdmin 4 v3.1](https://www.postgresql.org/ftp/pgadmin/pgadmin4/v3.1/windows/)


## Примечания/полезная информация:

* Приложения написанные на Python/Django Framework и C++/Qt Framework используют один и тот же файл БД "db.sqlite3", расположенный в корне приложений.
* Для генерации значений и заполнения ими БД использовался python-скрипт ..\Django\table_editor\fixtures\content_generator.py. Скрипт генерирует файл content.json который загружается в БД командой:
  ```
  manage.py loaddata content.json
  ```
* Один проект на три задачи, коммиты порой делались сразу для всех задач, потому прошу не заострять внимание на их описании.

