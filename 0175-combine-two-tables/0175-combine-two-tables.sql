# Write your MySQL query statement below
Select p.firstName, p.lastName ,a.city, a.state
From Person P 
Left join address a
on p.personId =a.personId;
