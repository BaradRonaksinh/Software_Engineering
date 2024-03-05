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
 
  
 
 
 