# Write your MySQL query statement below
select MAX(salary) AS SecondHighestSalary From Employee Where salary < (SELECT MAX(salary)
FROM Employee);