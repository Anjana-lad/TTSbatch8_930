SELECT * FROM batch8_9.customer;

CREATE USER 'user3'@'localhost' IDENTIFIED BY 'pwd1';
CREATE USER 'user4'@'localhost' IDENTIFIED BY 'pwd2';

GRANT SELECT,insert ON demo.demo1 TO 'user3'@'localhost';
grant select on demo.demo1 to 'user2'@'localhost';
revoke SELECT ON demo.demo1 FROM 'user3'@'localhost';

show grants for 'user3'@'localhost';

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

-- trriger when city insert  surat into table then it should display 
local.alter
delimiter //
create trigger add_city before insert on customer for each row
begin
	if new.city="Surat" then 
    set new.city="Local";
    end if;
end //
delimiter ;

insert into customer values(7,"Kevin",7536988841,"Surat",35),
(8,"Priya",9536477452,"kim",26);

select * from customer;

create table backup(c_id int, name varchar(20),mobile_no bigint);
-- trigger for after insert on table it should we in neew backup table also.\

delimiter //
create trigger add_new after insert on customer for each row
begin 
	insert into backup (c_id,name,mobile_no) 
    values(new.c_id,new.name,new.mobile_no);
end //
delimiter ;
insert into customer values(9,"Kev",75369928841,"vapi",37);

select * from backup;

-- for cursor first we have to create table for backup showing date when recored is inserted.
create table backup1(c_id int ,name varchar(20),ins_dt datetime);

drop table backup1;
-- after creating table we have to crete cursor

delimiter //
create procedure prct()
begin
    declare done int default 0;
    declare cid int;
    declare name varchar(50); -- Adjusted size for name
    
    -- Declare cursor for selecting customer data
    declare cr1 cursor for select c_id, name from customer;
    
    -- Declare a handler for end of cursor result set
    declare continue handler for not found set done = 1;
    
    -- Open the cursor
    open cr1;
    
    -- Loop through the cursor
    cust_info: loop
        fetch cr1 into cid, name;
        
        -- If no more rows, exit the loop
        if done = 1 then
            leave cust_info;
        end if;
        
        -- Insert data into backup table
        insert into backup (c_id, name, ins_dt) values (cid, name, now());
    end loop;
    
    -- Close the cursor
    close cr1;
end //
delimiter ;

call prct();

drop procedure prct;