SELECT * FROM 10_12.customer;

delimiter //
create trigger t3 after update on customer for each row
begin 
	insert into customer  
    set action='update',
    age = old.age;
end //
delimiter ;

update customer set age=36 where cid=4;

CREATE TABLE OLD_CUSTOMERS(
   cid INT ,
   name VARCHAR(20) ,
   mobile_no bigint ,
    age int,
   city varchar(10));

DELIMITER //
CREATE TRIGGER before_delete_trigger 
BEFORE DELETE ON CUSTOMER 
FOR EACH ROW
BEGIN
 INSERT INTO OLD_CUSTOMERs VALUES 
 (OLD.cid, OLD.name, OLD.mobile_no, OLD.age ,old.city);
END //
DELIMITER ;

drop trigger before_delete_trigger;
delete from customer where cid=4;