SELECT customers.name
FROM customers
INNER JOIN legal_person on customers.id = legal_person.id_customers;