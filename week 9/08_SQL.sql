CREATE TABLE PERSON (
    driver_id VARCHAR(50) PRIMARY KEY,
    name VARCHAR(100),
    address VARCHAR(200)
);

CREATE TABLE CAR (
    regno VARCHAR(20) PRIMARY KEY,
    model VARCHAR(50),
    year INT
);

CREATE TABLE ACCIDENT (
    report_number INT PRIMARY KEY,
    accd_date DATE,
    location VARCHAR(100)
);

CREATE TABLE OWNS (
    driver_id VARCHAR(50),
    regno VARCHAR(20),
    PRIMARY KEY (driver_id, regno),
    FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
    FOREIGN KEY (regno) REFERENCES CAR(regno)
);

CREATE TABLE PARTICIPATED (
    driver_id VARCHAR(50),
    regno VARCHAR(20),
    report_number INT,
    damage_amount INT,
    PRIMARY KEY (driver_id, regno, report_number),
    FOREIGN KEY (driver_id) REFERENCES PERSON(driver_id),
    FOREIGN KEY (regno) REFERENCES CAR(regno),
    FOREIGN KEY (report_number) REFERENCES ACCIDENT(report_number)
);




-- Inserting records into PERSON
INSERT INTO PERSON VALUES ('D1', 'John Doe', '123 Elm St');
INSERT INTO PERSON VALUES ('D2', 'Jane Smith', '456 Oak St');
INSERT INTO PERSON VALUES ('D3', 'Alice Johnson', '789 Maple St');
INSERT INTO PERSON VALUES ('D4', 'Bob Brown', '101 Pine St');
INSERT INTO PERSON VALUES ('D5', 'Carol White', '202 Cedar St');

-- Inserting records into CAR
INSERT INTO CAR VALUES ('R1', 'Toyota Camry', 2005);
INSERT INTO CAR VALUES ('R2', 'Honda Accord', 2008);
INSERT INTO CAR VALUES ('R3', 'Ford Focus', 2008);
INSERT INTO CAR VALUES ('R4', 'Nissan Altima', 2010);
INSERT INTO CAR VALUES ('R5', 'Chevrolet Malibu', 2007);

-- Inserting records into ACCIDENT
INSERT INTO ACCIDENT VALUES (10, '2008-05-20', 'Downtown');
INSERT INTO ACCIDENT VALUES (11, '2008-07-15', 'Uptown');
INSERT INTO ACCIDENT VALUES (12, '2009-03-10', 'Suburb');
INSERT INTO ACCIDENT VALUES (13, '2010-11-11', 'City Center');
INSERT INTO ACCIDENT VALUES (14, '2011-01-22', 'Highway');

-- Inserting records into OWNS
INSERT INTO OWNS VALUES ('D1', 'R1');
INSERT INTO OWNS VALUES ('D2', 'R2');
INSERT INTO OWNS VALUES ('D3', 'R3');
INSERT INTO OWNS VALUES ('D4', 'R4');
INSERT INTO OWNS VALUES ('D5', 'R5');

-- Inserting records into PARTICIPATED
INSERT INTO PARTICIPATED VALUES ('D1', 'R1', 10, 12000);
INSERT INTO PARTICIPATED VALUES ('D2', 'R2', 11, 8000);
INSERT INTO PARTICIPATED VALUES ('D3', 'R3', 12, 15000);
INSERT INTO PARTICIPATED VALUES ('D4', 'R4', 13, 20000);
INSERT INTO PARTICIPATED VALUES ('D5', 'R5', 14, 10000);



UPDATE PARTICIPATED
SET damage_amount = 25000
WHERE regno = 'R3' AND report_number = 12;


INSERT INTO ACCIDENT VALUES (15, '2024-10-21', 'Park Avenue');
-- Also add PARTICIPATED entries as needed for the new accident
INSERT INTO PARTICIPATED VALUES ('D1', 'R1', 15, 5000);


SELECT COUNT(DISTINCT OWNS.driver_id) AS total_people
FROM OWNS
JOIN PARTICIPATED ON OWNS.regno = PARTICIPATED.regno
JOIN ACCIDENT ON PARTICIPATED.report_number = ACCIDENT.report_number
WHERE YEAR(ACCIDENT.accd_date) = 2008;


SELECT COUNT(DISTINCT PARTICIPATED.report_number) AS num_accidents
FROM PARTICIPATED
JOIN CAR ON PARTICIPATED.regno = CAR.regno
WHERE CAR.model = 'Honda Accord';
