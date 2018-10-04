--Напишите запрос который бы выбрал только записи с максимальным значением value в группе grp. В результате запроса должны быть все 3 колонки.
select t1.*
from table1 t1 inner join (select "Grp", max("Value") Val from table1 group by "Grp") t
    on t1."Grp"=t."Grp" and t1."Value"=t.Val
