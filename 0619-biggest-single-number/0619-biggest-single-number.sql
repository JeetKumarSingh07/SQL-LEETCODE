# Write your MySQL query statemense
select max(num)  as  num 
from 
(select num from MyNumbers
group by num 
having count(num)=1) as new_table