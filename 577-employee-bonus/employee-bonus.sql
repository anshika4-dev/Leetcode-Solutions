# Write your MySQL query statement below
SELECT e.name,b.bonus
from Employee e
left join Bonus b
ON e.empID=b.empID
where bonus < 1000 OR Bonus is NULL; 