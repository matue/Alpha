# https://djbook.ru/rel1.5/howto/initial-data.html
# Генератор контента в формате json для заполнения БД через django.
# Загрузить данные: выполните команду manage.py loaddata content.json.


import json
import random

n = 50  # записей

with open('content.json', 'w', encoding='utf-8') as content:
    content.write('[')
    for i in range(1, n):
        content.write(json.dumps(
                {
                    'model': 'table_editor.Tab',
                    'fields': {
                        'id': i,
                        'a': 'A-' + str(i) + ' text value',
                        'b': 'B-' + str(i) + ' text value',
                        'c': random.randint(2000, 5000)
                    }
                },
                ensure_ascii=False))
        if not i == n-1:
            content.write(',\n')
    content.write(']')