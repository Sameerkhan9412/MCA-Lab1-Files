CREATE DATABASE bankingSystem;

use bankingSystem;

-- Part (a): Create the tables with primary and foreign keys
-- BRANCH table
CREATE TABLE BRANCH (
    branch_name VARCHAR(50) PRIMARY KEY,
    branch_city VARCHAR(50),
    assets REAL
);

-- ACCOUNT table
CREATE TABLE ACCOUNT (
    accno INT PRIMARY KEY,
    branch_name VARCHAR(50),
    balance REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);

-- CUSTOMER table
CREATE TABLE CUSTOMER (
    customer_name VARCHAR(50) PRIMARY KEY,
    customer_street VARCHAR(100),
    customer_city VARCHAR(50)
);

-- DEPOSITOR table
CREATE TABLE DEPOSITOR (
    customer_name VARCHAR(50),
    accno INT,
    PRIMARY KEY (customer_name, accno),
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name) ON DELETE CASCADE,
    FOREIGN KEY (accno) REFERENCES ACCOUNT(accno) ON DELETE CASCADE
);

-- LOAN table
CREATE TABLE LOAN (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(50),
    amount REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);

-- BORROWER table
CREATE TABLE BORROWER (
    customer_name VARCHAR(50),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name) ON DELETE CASCADE,
    FOREIGN KEY (loan_number) REFERENCES LOAN(loan_number) ON DELETE CASCADE
);

-- Part (b): Insert tuples for each relation
-- Insert into BRANCH
INSERT INTO BRANCH VALUES ('Main', 'New York', 1000000);
INSERT INTO BRANCH VALUES ('Downtown', 'Los Angeles', 750000);
INSERT INTO BRANCH VALUES ('Central', 'Chicago', 500000);
INSERT INTO BRANCH VALUES ('Uptown', 'Houston', 300000);
INSERT INTO BRANCH VALUES ('Eastside', 'Phoenix', 450000);

-- Insert into ACCOUNT
INSERT INTO ACCOUNT VALUES (101, 'Main', 5000);
INSERT INTO ACCOUNT VALUES (102, 'Main', 10000);
INSERT INTO ACCOUNT VALUES (103, 'Downtown', 7000);
INSERT INTO ACCOUNT VALUES (104, 'Central', 8000);
INSERT INTO ACCOUNT VALUES (105, 'Uptown', 12000);

-- Insert into CUSTOMER
INSERT INTO CUSTOMER VALUES ('Alice', '123 Elm St', 'New York');
INSERT INTO CUSTOMER VALUES ('Bob', '456 Maple St', 'Chicago');
INSERT INTO CUSTOMER VALUES ('Carol', '789 Oak St', 'Los Angeles');
INSERT INTO CUSTOMER VALUES ('David', '101 Pine St', 'Houston');
INSERT INTO CUSTOMER VALUES ('Eve', '202 Cedar St', 'Phoenix');

-- Insert into DEPOSITOR
INSERT INTO DEPOSITOR VALUES ('Alice', 101);
INSERT INTO DEPOSITOR VALUES ('Alice', 102);
INSERT INTO DEPOSITOR VALUES ('Bob', 104);
INSERT INTO DEPOSITOR VALUES ('Carol', 103);
INSERT INTO DEPOSITOR VALUES ('David', 105);

-- Insert into LOAN
INSERT INTO LOAN VALUES (201, 'Main', 15000);
INSERT INTO LOAN VALUES (202, 'Downtown', 20000);
INSERT INTO LOAN VALUES (203, 'Central', 12000);
INSERT INTO LOAN VALUES (204, 'Uptown', 18000);
INSERT INTO LOAN VALUES (205, 'Eastside', 16000);

-- Insert into BORROWER
INSERT INTO BORROWER VALUES ('Alice', 201);
INSERT INTO BORROWER VALUES ('Bob', 202);
INSERT INTO BORROWER VALUES ('Carol', 203);
INSERT INTO BORROWER VALUES ('David', 204);
INSERT INTO BORROWER VALUES ('Eve', 205);

-- Part (c): Find all the customers who have at least two accounts at the "Main" branch
SELECT d.customer_name
FROM DEPOSITOR d
JOIN ACCOUNT a ON d.accno = a.accno
WHERE a.branch_name = 'Main'
GROUP BY d.customer_name
HAVING COUNT(d.accno) >= 2;

-- Part (d): Find all the customers who have an account at all branches located in a specific city (e.g., "New York")
SELECT d.customer_name
FROM DEPOSITOR d
JOIN ACCOUNT a ON d.accno = a.accno
JOIN BRANCH b ON a.branch_name = b.branch_name
WHERE b.branch_city = 'New York'
GROUP BY d.customer_name
HAVING COUNT(DISTINCT a.branch_name) = (SELECT COUNT(branch_name) 
                                        FROM BRANCH 
                                        WHERE branch_city = 'New York');

-- Part (e): Delete all account tuples at every branch located in a specific city (e.g., "New York")
DELETE FROM ACCOUNT
WHERE branch_name IN (
    SELECT branch_name
    FROM BRANCH
    WHERE branch_city = 'New York'
);


