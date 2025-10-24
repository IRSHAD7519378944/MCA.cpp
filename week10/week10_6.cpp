//(a) Create Tables with Primary & Foreign Keys
-- 1. BRANCH Table
CREATE TABLE BRANCH (
    branch_name VARCHAR(20) PRIMARY KEY,
    branch_city VARCHAR(20),
    assets REAL
);

-- 2. ACCOUNT Table
CREATE TABLE ACCOUNT (
    accno INT PRIMARY KEY,
    branch_name VARCHAR(20),
    balance REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name)
);

-- 3. DEPOSITOR Table
CREATE TABLE DEPOSITOR (
    customer_name VARCHAR(20),
    accno INT,
    PRIMARY KEY (customer_name, accno),
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (accno) REFERENCES ACCOUNT(accno)
);

-- 4. CUSTOMER Table
CREATE TABLE CUSTOMER (
    customer_name VARCHAR(20) PRIMARY KEY,
    customer_street VARCHAR(20),
    customer_city VARCHAR(20)
);

-- 5. LOAN Table
CREATE TABLE LOAN (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(20),
    amount REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name)
);

-- 6. BORROWER Table
CREATE TABLE BORROWER (
    customer_name VARCHAR(20),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (loan_number) REFERENCES LOAN(loan_number)
);

//(b) Insert Sample Data (5 tuples each)
-- BRANCH
INSERT INTO BRANCH VALUES 
('Main', 'New York', 5000000),
('North', 'Boston', 3000000),
('South', 'Chicago', 4000000),
('East', 'New York', 3500000),
('West', 'San Francisco', 4500000);

-- CUSTOMER
INSERT INTO CUSTOMER VALUES
('Alice', '5th Avenue', 'New York'),
('Bob', 'Main Street', 'Boston'),
('Charlie', 'Lake Road', 'Chicago'),
('David', 'Oak Street', 'New York'),
('Eva', 'Pine Street', 'San Francisco');

-- ACCOUNT
INSERT INTO ACCOUNT VALUES
(101, 'Main', 20000),
(102, 'Main', 15000),
(103, 'North', 25000),
(104, 'East', 30000),
(105, 'West', 40000);

-- DEPOSITOR
INSERT INTO DEPOSITOR VALUES
('Alice', 101),
('Alice', 102),
('Bob', 103),
('Charlie', 104),
('Eva', 105);

-- LOAN
INSERT INTO LOAN VALUES
(201, 'Main', 50000),
(202, 'North', 40000),
(203, 'South', 35000),
(204, 'East', 30000),
(205, 'West', 45000);

-- BORROWER
INSERT INTO BORROWER VALUES
('Alice', 201),
('Bob', 202),
('Charlie', 203),
('David', 204),
('Eva', 205);

//(c) Find all customers who have at least two accounts at the Main branch
SELECT D.customer_name
FROM DEPOSITOR D
JOIN ACCOUNT A ON D.accno = A.accno
WHERE A.branch_name = 'Main'
GROUP BY D.customer_name
HAVING COUNT(D.accno) >= 2;

//(d) Find all customers who have an account at all branches in a specific city (e.g., New York)
SELECT D.customer_name
FROM DEPOSITOR D
JOIN ACCOUNT A ON D.accno = A.accno
JOIN BRANCH B ON A.branch_name = B.branch_name
WHERE B.branch_city = 'New York'
GROUP BY D.customer_name
HAVING COUNT(DISTINCT A.branch_name) = 
       (SELECT COUNT(*) FROM BRANCH WHERE branch_city = 'New York');

//(e) Delete all account tuples at every branch located in a specific city (e.g., Chicago)
DELETE FROM ACCOUNT
WHERE branch_name IN (
    SELECT branch_name FROM BRANCH WHERE branch_city = 'Chicago'
);


/////////////////////////////////////
-- Delete dependent depositor records first
DELETE FROM DEPOSITOR
WHERE accno IN (
    SELECT accno FROM ACCOUNT
    WHERE branch_name IN (
        SELECT branch_name FROM BRANCH WHERE branch_city = 'Chicago'
    )
);

-- Then delete accounts
DELETE FROM ACCOUNT
WHERE branch_name IN (
    SELECT branch_name FROM BRANCH WHERE branch_city = 'Chicago'
);

