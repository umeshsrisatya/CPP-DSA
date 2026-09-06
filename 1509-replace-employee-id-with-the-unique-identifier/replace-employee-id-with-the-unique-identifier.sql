-- Write your MySQL query statement below
select unique_id, name
from Employees e
full join EmployeeUNI eu
on e.id = eu.id 
where name is not null
order by unique_id
nulls first