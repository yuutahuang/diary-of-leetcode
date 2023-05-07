# 182. Duplicate Emails

SELECT email AS Email FROM (SELECT COUNT(email) AS EmailCount, email FROM Person
GROUP BY email) AS Temp WHERE EmailCount > 1;
