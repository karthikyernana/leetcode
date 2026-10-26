# Write your MySQL query statement below
select e.name as Customers from Customers e left join Orders f  on e.id = f.customerId where f.customerId is null;