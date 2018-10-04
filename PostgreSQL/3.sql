--Напишите запрос в результате которого будет отображен список всех символов цифр используемых в колонке id таблиц 1 и 2 и их общее количество.
--Каждый разряд считать за одну цифру, т.е. 11 считается как два раза по 1

select s.d number, count(*) count
from (select t1."Id" from table1 t1 union all select t2."Id" from table2 t2) t3 cross join lateral regexp_split_to_table(t3."Id"::character varying, '') s(d)
group by s.d
order by s.d;
