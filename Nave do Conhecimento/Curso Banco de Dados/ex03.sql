/*
- tudo o que será exibido precisa estar no SELECT
- não é necessário está no SELECT o que for ordenar a lista
*/

/*o código abaixo conta a quantidade de ocorrências de CustomerID dentro da tabela Orders a fim de ordenar os cinco clientes que mais fizeram pedidos*/
SELECT COUNT(Orders.CustomerID), Customers.CustomerName
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
GROUP BY (Orders.CustomerID)
ORDER BY COUNT(Orders.CustomerID) desc
LIMIT 5;
/*
RETORNO:
- Ernst Handel - 10 pedidos
- Wartian Herkku - 7 pedidos
- Rattlesnake Canyon Grocery - 7 pedidos
- QUICK-Stop - 7 pedidos
- Split Rail Beer & Ale - 6 pedidos
*/


/*Para pesquisar de que país é o usuário*/
SELECT CustomerName, Country
FROM Customers 
WHERE CustomerName LIKE "%Handel%";
/* Austria */
SELECT CustomerName, Country
FROM Customers 
WHERE CustomerName LIKE "%Herkku%";
/* Finland */
SELECT CustomerName, Country
FROM Customers 
WHERE CustomerName LIKE "%Rattlesnake%";
/* USA */
SELECT CustomerName, Country
FROM Customers 
WHERE CustomerName LIKE "%QUICK%";
/* Germany */
SELECT CustomerName, Country
FROM Customers 
WHERE CustomerName LIKE "%Split%";
/* USA */

/* para buscar os pedidos de cada cliente */
SELECT Customers.CustomerName, Orders.OrderID, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
WHERE Customers.CustomerName LIKE "%Handel%";
/*
RETORNO:
CustomerName	OrderID	OrderDate
Ernst Handel	10258	1996-07-17
Ernst Handel	10263	1996-07-23
Ernst Handel	10351	1996-11-11
Ernst Handel	10368	1996-11-29
Ernst Handel	10382	1996-12-13
Ernst Handel	10390	1996-12-23
Ernst Handel	10402	1997-01-02
Ernst Handel	10403	1997-01-03
Ernst Handel	10430	1997-01-30
Ernst Handel	10442	1997-02-11
*/

SELECT Customers.CustomerName, Orders.OrderID, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
WHERE CustomerName LIKE "%Herkku%";
/*
RETORNO:
CustomerName	OrderID	OrderDate
Wartian Herkku	10266	1996-07-26
Wartian Herkku	10270	1996-08-01
Wartian Herkku	10320	1996-10-03
Wartian Herkku	10333	1996-10-18
Wartian Herkku	10412	1997-01-13
Wartian Herkku	10416	1997-01-16
Wartian Herkku	10437	1997-02-05
*/

SELECT Customers.CustomerName, Orders.OrderID, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
WHERE CustomerName LIKE "%Rattlesnake%";
/*
RETORNO:
CustomerName	OrderID	OrderDate
Rattlesnake Canyon Grocery	10262	1996-07-22
Rattlesnake Canyon Grocery	10272	1996-08-02
Rattlesnake Canyon Grocery	10294	1996-08-30
Rattlesnake Canyon Grocery	10314	1996-09-25
Rattlesnake Canyon Grocery	10316	1996-09-27
Rattlesnake Canyon Grocery	10346	1996-11-05
Rattlesnake Canyon Grocery	10401	1997-01-01
*/

SELECT Customers.CustomerName, Orders.OrderID, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
WHERE CustomerName LIKE "%QUICK%";
/*
RETORNO:
CustomerName	OrderID	OrderDate
QUICK-Stop	10273	1996-08-05
QUICK-Stop	10285	1996-08-20
QUICK-Stop	10286	1996-08-21
QUICK-Stop	10313	1996-09-24
QUICK-Stop	10345	1996-11-04
QUICK-Stop	10361	1996-11-22
QUICK-Stop	10418	1997-01-17
*/

SELECT Customers.CustomerName, Orders.OrderID, Orders.OrderDate
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID
WHERE CustomerName LIKE "%Split%";
/*
RETORNO:
CustomerName	OrderID	OrderDate
Split Rail Beer & Ale	10271	1996-08-01
Split Rail Beer & Ale	10329	1996-10-15
Split Rail Beer & Ale	10349	1996-11-08
Split Rail Beer & Ale	10369	1996-12-02
Split Rail Beer & Ale	10385	1996-12-17
Split Rail Beer & Ale	10432	1997-01-31
*/