## Используемое при выполнении задания ПО:

### Библиотеки:

* [python 3.6](https://www.python.org/downloads/release/python-360/)
* [django 2.1.2](https://www.djangoproject.com/download/)
* [Qt 5.11.2](https://www.qt.io/download)

### Среды разработки:

* [Qt Creator 4.7.1](https://www.qt.io/download)
* [Pycharm 2018.1.3](https://www.jetbrains.com/pycharm/)
* [DataGrip 2018.2.4](https://www.jetbrains.com/datagrip/)


### СУБД:
* [PostgreSQL 10](https://www.postgresql.org/download/windows/)
* [pgAdmin 4 v3.1](https://www.postgresql.org/ftp/pgadmin/pgadmin4/v3.1/windows/)


## О работе приложения Django:

* Запуск производится командой:
  ```
  manage.py runserver
  ```
* Логин/пароль администратора:
  ```
  admin/admin
  ```
* Шаги для редактирования записей в БД через встроенный административный интерфейс:
1. Перейти в **TABLE_EDITOR - Tabs**: http://prntscr.com/l45baj
2. Выбрать запись из списка для редактирования: http://prntscr.com/l45bpq
3. После редактирования нажать **SAVE**: http://prntscr.com/l45czv

## О работе приложения Qt Framework:

* Собранное приложение можно запустить файлом **Qt_Framework.exe** из каталога:
  ```
  ..\Alpha\QT\build-Qt_Framework-Desktop_Qt_5_11_2_MinGW_32bit-Release\release\
  ```
* Для запуска проекта должны быть установлены все необходимые библиотеки **QT** (описано выше), в переменную окружения **Path** должен быть добавлен путь (пример), чтобы при запуске exe-файла "подхватывались" файлы библиотек, вроде **Qt5Widgets.dll** и другие: 
  ```
  C:\Qt\5.11.2\mingw53_32\bin
  ```
* Детали ui: (http://prntscr.com/l45gpl)
  * Строка **"Path:"** - путь до файла базы данных.
  * Кнопка **"Execute"** - открывает файл базы данных, извлекает рядом с ней SQL-код, результат выводит в виде таблицы ниже.
  * Кнопки **"Insert"**, **"Update by Id"**, **"Delete by Id"** - выполняют соответствующий SQL код с введенными в расположенную выше данными формы.
  * Список **"Out"** - Вывод результатов выполнения SQL-запросов. 
  
## Примечания/полезная информация:

* Приложения написанные на **Python/Django Framework** и **C++/Qt Framework** используют один и тот же файл БД **"db.sqlite3"**, расположенный в корне приложений.
* Для генерации значений и заполнения ими БД использовался скрипт 
  ```
  ..\Django\table_editor\fixtures\content_generator.py
  ```
  Скрипт генерирует файл **content.json** который загружается в БД командой:
  ```
  python manage.py loaddata content.json
  ```
* Один проект на три задачи, коммиты порой делались сразу для всех задач, потому прошу не заострять внимание на их описании.
