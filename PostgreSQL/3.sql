--Напишите запрос в результате которого будет отображен список всех символов цифр используемых 
--в колонке id таблиц 1 и 2 и их общее количество.
--Каждый разряд считать за одну цифру, т.е. 11 считается как два раза по 1

select regexp_split_to_table(t3."Id"::character varying,'') s,  count(*) count
from (select t1."Id" from table1 t1 union all select t2."Id" from table2 t2) t3
group by s

--p.s. здесь мы используем функцию regexp_split_to_table 
--чтобы разбить результат вложенного запроса посимвольно и вывести каждый символ в таблице, 
--затем группируем и считаем количество строк
