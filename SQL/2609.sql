SELECT categories.name, sum(products.amount)
FROM categories
INNER JOIN products
ON categories.id = products.id_categories 
GROUP BY categories.name;