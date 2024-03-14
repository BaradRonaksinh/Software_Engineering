create database db;
use db;

create table Student(
	Rollno int auto_increment,
    s_name varchar(50),
    Branch varchar(50),
    primary key(Rollno)
);

-- INSERT DATA IN STUDENT TABLE --

insert into Student 
(s_name,Branch)
values
('Jay','Computer Science'),
('Shuhani','Electronics and Com'),
('Kriti','Electronics and Com'); 


create table Exam(
	Rollno int,
    S_code varchar(50),
    Marks varchar(50),
    P_code varchar(50),
    foreign key(Rollno) references Student(Rollno)
);

 -- INSERT DATA IN EXAM TABLE --
 
 insert into Exam
 (Rollno,S_code,Marks,P_code)
 values
 (1,'CS11','50','CS'),
 (1,'CS12','60','CS'),
 (2,'EC101','66','EC'),
 (2,'EC101','70','EC'),
 (3,'EC101','50','EC'),
 (3,'EC101','50','EC');
 
 -- ****************************************************** --
 
 -- 2. Create table given below: Employee and IncentiveTable --
 
 create table Employee(
	Employee_id int auto_increment,
    First_Name varchar(50),
    Last_Name varchar(50),
    Salary varchar(50),
    joining_date datetime,
    Department varchar(50),
    primary key(Employee_id)
 );
 
DROP TABLE Employee;
 
 insert into Employee
 (First_Name,Last_Name,Salary,joining_date,Department)
 values
 ('John','Abraham','100000','2023-02-23 12:00:00','Banking');
 
 insert into Employee
 (First_Name,Last_Name,Salary,joining_date,Department)
 values
 ('Micheal','Clarke','800000','2023-01-03 12:00:00','Insurance'),
 ('Roy','Thomes','700000','2023-02-13 12:00:00','Banking'),
 ('Tom','jose','600000','2023-07-13 12:00:00','Insurance'),
 ('Jerry','Pinto','600000','2023-01-13 12:00:00','Insurance'),
 ('Philip','Mathew','750000','2023-01-03 12:00:00','Service'),
 ('TestName1','123','650000','2023-01-03 12:00:00','Service'),
 ('TestName2','Lname%','600000','2023-01-13 12:00:00','Insurance');
 
 create table Incentive(
	Employee_ref_id int,
    Incentive_date date,
    Incentive_amount varchar(50),
    foreign key(Employee_ref_id) references Employee(Employee_id)
 );
 
 -- INSERT DATA IN Incentive TABLE --
 
insert into Incentive
(Employee_ref_id,Incentive_date,Incentive_amount)
values
(1,'2023-02-23','5000'),
(2,'2023-01-03','3000'),
(3,'2023-02-13','4000'),
(1,'2023-01-03','4500'),
(2,'2023-01-03','3500');

-- 3. Get First_Name from employee table using Tom name “Employee Name” --

update Employee set First_Name ='Employee_Name'
where employee_id = 4;

-- 4. Get FIRST_NAME, Joining Date, and Salary from employee table. -- 

select First_name , joining_date ,Salary
from Employee;

--  5. Get all employee details from the employee table order by First_Name Ascending and Salary descending? -- 
 
 select * from Employee order by First_Name;
 
 select * from Employee order by Salary desc;
 
 -- 6. Get employee details from employee table whose first name contains ‘J’. --
 
 select * from Employee
 where First_Name like 'j%';
 
 -- 7. Get department wise maximum salary from employee table order by --
 
 select Department,Salary from Employee order by Salary desc;
 
 -- 8. salaryascending? -- 
 
select Department,Salary from Employee order by Salary;

-- 9. Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than 3000 -- 

select First_Name, Incentive_amount from Employee, Incentive where Incentive_amount > 3000;

-- 10. Create After Insert trigger on Employee table which insert records in viewtable -- 

 
 -- ************************************************************************* -- 
 
 -- 11. Create table given below: Salesperson and Customer --
 
 create table Salesperson(
	s_no int,
    s_name varchar(50),
    city varchar(50),
    comm double,
    primary key (s_no)
 );
 
 
 drop table Salesperson;
 -- insert data into salesperson table --
 
 insert into Salesperson
 (s_no, s_name, city, comm)
 values
 (1001,'Peel','london',0.12),
 (1002,'Serres','San jose',0.13),
 (1004,'Motika','london',0.11),
 (1007,'Rafkin','Barcelona',0.15),
 (1003,'Axelrod','New York',0.1);

-- Customer --

create table Customer(
	cnm int ,
    c_name varchar(50),
    city varchar(50),
    rating int,
    sno int,
    primary key(cnm),
    foreign key(sno) references Salesperson(s_no)
); 

-- insert data in customer table --

insert into Customer
(cnm, c_name, city, rating, sno)
values
(201,'Hoffman','London',100,1001),
(202,'Giovanne','Roe',200,1003),
(203,'Liu','San jose',300,1002),
(204,'Grass','Baecelona',100,1002),
(206,'Clemens','London',300,1007),
(207,'Pereira','Roe',100,1004);  

-- 12. Retrieve the below data from above table -- 

-- 13.All orders for more than $1000. --

-- 14.Names and cities of all salespeople in London with commission above 0.12 --

  select s_name, city from Salesperson where 
  city = 'london' and comm > 0.12;
  
-- 15.All salespeople either in Barcelona or in London --

select s_name, city from Salesperson where 
city = 'london' or city = 'Barcelona';

-- 16. All salespeople with commission between 0.10 and 0.12. (Boundary valuesshould be excluded). -- 

select s_name , comm from Salesperson where
comm between 0.1 and 0.12;

-- 17. All customers excluding those with rating <= 100 unless they are located in Roe --

select c_name from Customer where
rating <= 100 and city = 'Roe';

-- 18.Write a SQL statement that displays all the information about all salespeople --

select * from Salesperson; 

--  19.From the following table, write a SQL query to find orders that are
-- delivered by a salesperson with ID. 5001. Return ord_no, ord_date, purch_amt.--

-- create a table salesmans table --

create table Salesman(
	salesman_id int ,
    sale_m_name varchar(50),
    sm_city varchar(50),
    cmm double,
    primary key (salesman_id)
);

-- insert data into Salesman table --

insert into Salesman
(salesman_id, sale_m_name, sm_city, cmm)
values
(5001,'James Hoog','New York',0.15),
(5002,'Nail Knite','Paris',0.13),
(5005,'Pit Alex','London',0.11),
(5006,'MC Lyon','Paris',0.14),
(5007,'Paul Adam','Rome',0.13),
(5003,'Lauson Hen','San Jose',0.12); 

-- create table orders -- 

create table orders(
	ord_no int,
    purch_amt varchar(50),
    ord_date date,
    customer_id int,
    salesman_id int,
    primary key(ord_no),
    foreign key (salesman_id) references Salesman(salesman_id)
);

drop table orders;

-- insert data into orders table --

insert into orders
( ord_no, purch_amt, ord_date, customer_id, salesman_id)
values
(70001,'150.5','2012-10-05',3005,5002),
(70009,'150.5','2012-09-10',3001,5005),
(70002,'150.5','2012-10-05',3002,5001),
(70004,'150.5','2012-08-17',3009,5003),
(70007,'150.5','2012-09-10',3005,5002),
(70005,'150.5','2012-07-27',3007,5001),
(70008,'150.5','2012-09-10',3002,5001),
(70010,'150.5','2012-10-10',3004,5006),
(70003,'150.5','2012-10-10',3009,5003),
(70012,'150.5','2012-06-27',3008,5002),
(70011,'150.5','2012-08-17',3003,5007),
(70013,'150.5','2012-04-25',3002,5001); 

select ord_no, ord_date, purch_amt from orders 
where salesman_id = 5001;

-- 20.From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end -- 
-- values are included. Return pro_id, pro_name, pro_price, and pro_com-- 

--  create a table item_mast --

create table item_mast(
	pro_id int,
    pro_name varchar(50),
    pro_price varchar(50),
    pro_com int,
    primary key(pro_id)
); 

-- insert data into item_mast table --

insert into item_mast
(pro_id, pro_name, pro_price, pro_com)
values
(101,'Mother Borad','3200.00',15),
(102,'Key Borad','450.00',16),
(103,'ZIP Drive','250.00',14),
(104,'Speaker','550.00',16),
(105,'Monitor','5000.00',11),
(106,'DVD Drive','900.00',12),
(107,'CD Drive','800.00',12),
(108,'Printer','2600.00',13),
(109,'Refill cartridge','350.00',13),
(110,'Mouse','250.00',12); 


select pro_id, pro_name, pro_price, pro_com
from item_mast 
where pro_price between 200 and 600;

-- 21.From the following table, write a SQL query to calculate the averageprice
-- for a manufacturer code of 16. Return avg -- 

select sum(pro_price) from item_mast;

select avg(pro_price)
from item_mast
where pro_com = 16;


--  22.From the following table, write a SQL query to display the pro_nameas
-- 'Item Name' and pro_priceas 'Price in Rs. -- 

alter table item_mast
modify column pro_name to Item_name;


-- 23.From the following table, write a SQL query to find the items whose prices
-- are higher than or equal to $250. Order the result by product price in
-- descending, then product name in ascending. Return pro_name and pro_price. -- 

select pro_name from item_mast
where pro_price >= 250 ;

select * from item_mast
order by pro_price  desc;

select pro_name from item_mast 
order by pro_name asc;


-- 24.From the following table, write a SQL query to calculate average price ofthe -- 
-- items for each company. Return average price and companycode -- 


select avg(pro_price),pro_com
from item_mast
where pro_com = 11;

select avg(pro_price),pro_com
from item_mast
where pro_com = 12;

select avg(pro_price),pro_com
from item_mast
where pro_com = 13;

select avg(pro_price),pro_com
from item_mast
where pro_com = 14;

select avg(pro_price),pro_com
from item_mast
where pro_com = 15;

select avg(pro_price),pro_com
from item_mast
where pro_com = 16;


 