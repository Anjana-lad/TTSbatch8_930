SELECT * FROM batch8_9.customer;
-- function
delimiter //
CREATE FUNCTION birth_year(age int) RETURNS int
    DETERMINISTIC
begin
	declare y_d date;
    select curdate() into y_d;
    return year(y_d) - age;
end //
delimiter ;
-- procedure without parameter.
delimiter //
CREATE PROCEDURE p1()
begin
	select * from customer where age>=30;
end
delimiter ;
-- procedure with in parameter
delimiter //
CREATE PROCEDURE p2(in id int)
begin 
	select name, mobile_no from customer where c_id=id;
end //
delimiter ;
delimiter $$
CREATE PROCEDURE p3(in ct varchar(10))
begin 
	select name, mobile_no from customer where city=ct;
end
delimiter ;
-- procedure with in and out parameter
delimiter //
CREATE PROCEDURE p4(in id int,out c_name varchar(20))
begin
	select name from customer where c_id=id;
end
delimiter ;
-- procedure with inout parameter
delimiter //
CREATE PROCEDURE p5(inout var int)
begin
	select pay_amount into var from payment where pay_id=var;
end //
delimiter ;
-- drop procedure p5;
 
set @var='101';
call p5(@var);
select @var; 