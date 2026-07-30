# Write your MySQL query statement below
SELECT name as Customers 
FROM Customers c
LEFT JOIN Orders o
ON c.id=o.customerID
WHERE o.customerid IS NULL;