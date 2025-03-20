select 
     name AS Customers 
FROM Customers WHERE Id
Not In 
    (
	  SELECT 
	        customerId 
	  FROM Orders
	 )