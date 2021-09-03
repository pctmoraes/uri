SELECT products.name
FROM products
INNER JOIN providers
ON products.id_providers = providers.id
WHERE products.amount between 10 and 20
AND
providers.name LIKE 'P%';