use flipkart;

-- ****  Insert in a customer Table  ****--
  
insert into customer
(customer_name,customer_address,customer_mobile,city)
values
('ronak','gir-somanath','9876543210','kodinar');

insert into customer
(customer_name,customer_address,customer_mobile,city)
values
('vijay','gir-somanath','956843123','dolasa'),
('deep','navsari','8656484623','navsari'),
('niraj','surat','9165805792','varachha');

insert into customer
(customer_name,customer_address,customer_mobile,city)
values
('nikita','surat','568984563','varachha'),
('jeel','kesod','98465121','navsari'),
('vivek','surat','89465123','surat'),
('ankit','surat','94123265','varachha');


-- **** Insert in a category table ****--

insert into category
(category_name,category_image) 
values
('electronics','01_img.png'),
('gloserry','02_img.png'),
('home-upplinace','03_img.png'),
('kitchen','04_img.png');

insert into category
(category_name,category_image) 
values
('electronics','05_img.png'),
('bags','06_img.png'),
('bikes_instuments','07_img.png'),
('kitchen','08_img.png'),
('laptop-gadets','09_img.png'),
('badroom','10_img.png');


-- Insert in a product table --

insert into product
(product_name,category_id,product_price,product_rating,product_desc)
values
('iphone 14 pro',1,'59000','4.5','very powerfull electronics device'),
('travel-bag',2,'950','4.2','use for travel time for carry laugadets'),
('silensor',3,'2600','4.1','cancel most of the noise of engine'),
('crockery',4,'550','4.2','use in kitchen'),
('air-coolerr',3,'1100','3.6','cooling system for laptops'),
('pillow',4,'770','3.9','sleep well at night');

insert into product
(product_name,category_id,product_price,product_rating,product_desc)
values
('hp laptop',1,'45000','4.2','gaming laptop'),
('aarshivaad aata',2,'250','4.1','use to make chapati and healthy food'),
('sofa set',3,'19500','3.6','3 differnet color choice'),
('cooker',4,'700','4.0','cook and steam our healthy food');


-- Insert in a payment table --

insert into payment
(total,payment_type)
values
(58900,'online'),
(250,'cash'),
(19500,'online'),
(700,'cash');

insert into payment
(total,payment_type)
values
(5900,'online'),
(2250,'cash'),
(1500,'cash'),
(1700,'cash'),
(890,'online'),
(1370,'online');

-- Insert in a ordertbl --
use flipkart;
insert into ordertbl
(total,order_date)
values
(5900,'2023-11-23 13:17:17'),
(890,'2023-12-03 13:17:17'),
(190,'2023-11-12 13:17:17'),
(980,'2023-12-11 13:17:17');  

-- insert into ordertbl
-- (total,product_id,category_id,customer_id,order_date)
-- values
-- (590,'2023-11-23 19:10:13'),
-- (45000,'2023-12-03 13:17:11'),
-- (7894,'2023-11-12 13:17:10'),
-- (9180,'2023-12-11 13:17:14'),
-- (120,'2023-11-12 13:17:10'),
-- (8964,'2023-12-11 13:17:14');


insert into ordertbl
(total,product_id,category_id,customer_id,order_date)
values
(590,2,2,2,'2023-11-23 19:10:13'),
(45000,1,2,1,'2023-12-03 13:17:11'),
(7894,3,2,2,'2023-11-12 13:17:10'),
(9180,1,1,2,'2023-12-11 13:17:14'),
(120,1,1,1,'2023-11-12 13:17:10'),
(8964,4,3,3,'2023-12-11 13:17:14');

