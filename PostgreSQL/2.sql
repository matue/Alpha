--Напишите запрос в результате которого будет отображен список id таблицы 1 и id таблицы 2 которые не пересекаются.
select t1."Id" from table1 t1 union select t2."Id" from table2 t2
except
select t1."Id" from table1 t1 intersect select t2."Id" from table2 t2