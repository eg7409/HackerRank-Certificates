/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/

SELECT s.stock_code FROM price_today AS s, price_tomorrow AS p WHERE p.stock_code = s.stock_code and p.price> s.price;
