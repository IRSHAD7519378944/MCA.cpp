// week - 9 @mdirshad-25CAMSA158
/*8# Consider the insurance database given below. The primary keys are made
bold, and the data types are specified.
PERSON (driver_id:string , name:string , address:string )
CAR(regno:string , model:string , year:int )
ACCIDENT(report_number:int , accd_date:date , location:string )
OWNS(driver_id:string , regno:string )
PARTICIPATED (driver_id: string, regno: string, report_number: int ,
damage_amount: int).*/

// 1. Create tables with Primary and Foreign Keys

CREATE TABLE PERSON (
  driver_id VARCHAR(10) PRIMARY KEY,
  name VARCHAR(30),
  address VARCHAR(50)
);

CREATE TABLE CAR (
  regno VARCHAR(10) PRIMARY KEY,
  model VARCHAR(20),
  year INT
);

CREATE TABLE ACCIDENT (
  report_number INT PRIMARY KEY,
  accd_date DATE,
  location VARCHAR(50)
);

CREATE TABLE OWNS (
  driver_id VARCHAR(10),
  regno VARCHAR(10),
  PRIMARY KEY (driver_id, regno),
  FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
  FOREIGN KEY (regno) REFERENCES CAR(regno)
);

CREATE TABLE PARTICIPATED (
  driver_id VARCHAR(10),
  regno VARCHAR(10),
  report_number INT,
  damage_amount INT,
  PRIMARY KEY (driver_id, regno, report_number),
  FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
  FOREIGN KEY (regno) REFERENCES CAR(regno),
  FOREIGN KEY (report_number) REFERENCES ACCIDENT(report_number)
);

// 2. Insert at least 5 tuples in each relation

INSERT INTO PERSON VALUES
('D1', 'Amit', 'Delhi'),
('D2', 'Ravi', 'Mumbai'),
('D3', 'Neha', 'Pune'),
('D4', 'Suman', 'Kolkata'),
('D5', 'Arjun', 'Chennai');

INSERT INTO CAR VALUES
('C1', 'Swift', 2008),
('C2', 'i20', 2010),
('C3', 'City', 2008),
('C4', 'Verna', 2009),
('C5', 'Fortuner', 2012);

INSERT INTO ACCIDENT VALUES
(11, '2008-05-12', 'Delhi'),
(12, '2010-08-25', 'Mumbai'),
(13, '2008-03-15', 'Pune'),
(14, '2009-09-30', 'Kolkata'),
(15, '2012-06-10', 'Chennai');

INSERT INTO OWNS VALUES
('D1', 'C1'),
('D2', 'C2'),
('D3', 'C3'),
('D4', 'C4'),
('D5', 'C5');

INSERT INTO PARTICIPATED VALUES
('D1', 'C1', 11, 15000),
('D2', 'C2', 12, 20000),
('D3', 'C3', 13, 12000),
('D4', 'C4', 14, 18000),
('D5', 'C5', 15, 25000);

//3. Update the damage amount for a car with specific regno in accident report_number = 12 to 25000
   
UPDATE PARTICIPATED
SET damage_amount = 25000
WHERE report_number = 12;

// 4. Add a new accident to the database

INSERT INTO ACCIDENT VALUES (16, '2013-07-22', 'Bangalore');
			or
INSERT INTO PARTICIPATED VALUES ('D1', 'C1', 16, 10000);

// 5. Find total number of people who owned cars involved in accidents in 2008

SELECT COUNT(DISTINCT o.driver_id) AS total_people
FROM OWNS o
JOIN PARTICIPATED p ON o.regno = p.regno
JOIN ACCIDENT a ON p.report_number = a.report_number
WHERE EXTRACT(YEAR FROM a.accd_date) = 2008;

// 6. Find number of accidents in which cars belonging to a specific model were involved

SELECT COUNT(DISTINCT p.report_number) AS total_accidents
FROM PARTICIPATED p
JOIN CAR c ON p.regno = c.regno
WHERE c.model = 'Swift';

