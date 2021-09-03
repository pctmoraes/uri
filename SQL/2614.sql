SELECT customers.name, rentals.rentals_date
FROM rentals
INNER JOIN customers
ON customers.id = rentals.id_customers
WHERE rentals.rentals_date between '2016-09-01' and '2016-09-30';