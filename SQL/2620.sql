SELECT customers.name, orders.id
FROM customers
INNER JOIN orders
ON customers.id = orders.id_customers
WHERE orders.orders_date between '2016-01-01' and '2016-06-30';