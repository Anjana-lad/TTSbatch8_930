SELECT * FROM batch8_9.customer;
-- aggregate functions.
select min(age) from customer;
select max(age) from customer;
select max(age) as maximum_age from customer;
select count(c_id) from customer;
select sum(pay_amount) as total_amt from payment;
select avg(pay_amount) as avg_amt from payment;

-- syntax: inner join
-- select *,(colunm_name), column_name from tableA 
-- inner join tableB on tableA.id=tableB.id; 
 SELECT 
    c_id, name, pay_id, pay_mode, pay_date
FROM
    customer
        INNER JOIN
    payment ON customer.c_id = payment.cid;
    
-- inner join
SELECT 
    *
FROM
    customer
        INNER JOIN
    payment ON customer.c_id = payment.cid;
-- syntax :left outer join
-- select * from tableA left join table on 
-- tableA.id=tableB.id;
SELECT 
    c_id, name, age, mobile_no, city, pay_mode, pay_date
FROM
    customer
        LEFT JOIN
    payment ON customer.c_id = payment.cid;

-- right outer join
-- select * from tableA right join table on 
-- tableA.id=tableB.id;
 SELECT 
    c_id, name, age, mobile_no, city, pay_mode, pay_date
FROM
    customer
        RIGHT JOIN
    payment ON customer.c_id = payment.cid;

-- self join 
SELECT 
    c.c_id, p.pay_id, c.name, p.pay_amount
FROM
    customer c,
    payment p
WHERE
    c.c_id = p.cid;

-- full outer join
SELECT 
    c_id, name, age, mobile_no, city, pay_mode, pay_date
FROM
    customer
        LEFT JOIN
    payment ON customer.c_id = payment.cid 
UNION SELECT 
    c_id, name, age, mobile_no, city, pay_mode, pay_date
FROM
    customer
        RIGHT JOIN
    payment ON customer.c_id = payment.cid;
    
-- cross join
SELECT 
    *
FROM
    customer
        CROSS JOIN
    payment;