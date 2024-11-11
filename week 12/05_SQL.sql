CREATE DATABASE university;
use university;

-- Create Tables with Primary Keys, Foreign Keys, and Secondary Indexes
-- University table
CREATE TABLE University (
    university_id INT PRIMARY KEY,
    university_name VARCHAR(100),
    location VARCHAR(100),
    established_year INT
);

-- Secondary Index for University table
CREATE INDEX idx_university_location ON University(location);

-- Department table
CREATE TABLE Department (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100),
    university_id INT,
    department_head VARCHAR(100),
    FOREIGN KEY (university_id) REFERENCES University(university_id)
);

-- Secondary Index for Department table
CREATE INDEX idx_department_name ON Department(department_name);

-- Program table
CREATE TABLE Program (
    program_id INT PRIMARY KEY,
    program_name VARCHAR(100),
    department_id INT,
    duration INT, -- in years
    FOREIGN KEY (department_id) REFERENCES Department(department_id)
);

-- Secondary Index for Program table
CREATE INDEX idx_program_name ON Program(program_name);

-- Course table
CREATE TABLE Course (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(100),
    program_id INT,
    credits INT,
    FOREIGN KEY (program_id) REFERENCES Program(program_id)
);

-- Secondary Index for Course table
CREATE INDEX idx_course_name ON Course(course_name);

-- Syllabus table
CREATE TABLE Syllabus (
    syllabus_id INT PRIMARY KEY,
    course_id INT,
    syllabus_details TEXT,
    FOREIGN KEY (course_id) REFERENCES Course(course_id)
);

-- Secondary Index for Syllabus table
CREATE INDEX idx_syllabus_course_id ON Syllabus(course_id);

-- Faculty (Teacher) table
CREATE TABLE Faculty (
    faculty_id INT PRIMARY KEY,
    name VARCHAR(100),
    department_id INT,
    specialization VARCHAR(100),
    FOREIGN KEY (department_id) REFERENCES Department(department_id)
);

-- Secondary Index for Faculty table
CREATE INDEX idx_faculty_specialization ON Faculty(specialization);

-- b) Insert at Least 5 Records in Each Table
-- Inserting into University table
INSERT INTO University VALUES
(1, 'Aligarh Muslim University', 'Aligarh', 1920),
(2, 'Jawaharlal Nehru University', 'Delhi', 1969),
(3, 'University of Jammu', 'Jammu', 1969),
(4, 'Banaras Hindu University', 'Varanasi', 1916),
(5, 'Delhi University', 'Delhi', 1922);

-- Inserting into Department table
INSERT INTO Department VALUES
(1, 'Computer Science', 1, 'Dr. Naseem Ahmad'),
(2, 'Physics', 2, 'Dr. R. Sharma'),
(3, 'Mathematics', 3, 'Dr. S. Gupta'),
(4, 'Information Technology', 4, 'Dr. V. Singh'),
(5, 'Cyber Security', 5, 'Dr. A. Kumar');

-- Inserting into Program table
INSERT INTO Program VALUES
(1, 'MCA', 1, 3),
(2, 'PhD in Physics', 2, 5),
(3, 'BSc in Mathematics', 3, 3),
(4, 'M.Tech in IT', 4, 2),
(5, 'MCA', 5, 3);

-- Inserting into Course table
INSERT INTO Course VALUES
(1, 'Data Structures', 1, 3),
(2, 'Computer Networks', 1, 3),
(3, 'Quantum Mechanics', 2, 4),
(4, 'Discrete Mathematics', 3, 3),
(5, 'Cyber Security Basics', 5, 4);

-- Inserting into Syllabus table
INSERT INTO Syllabus VALUES
(1, 1, 'Introduction to Data Structures, Arrays, Linked Lists'),
(2, 2, 'Network Models, Protocols, Routing Algorithms'),
(3, 3, 'Wave Functions, Quantum States, Probability'),
(4, 4, 'Graph Theory, Combinatorics, Probability'),
(5, 5, 'Cryptography, Firewall Management, Malware Protection');

-- Inserting into Faculty table
INSERT INTO Faculty VALUES
(1, 'Dr. M. Ali', 1, 'Software Engineering'),
(2, 'Dr. R. Patel', 2, 'Quantum Mechanics'),
(3, 'Dr. S. Chauhan', 3, 'Mathematics and Algebra'),
(4, 'Dr. P. Kumar', 4, 'Artificial Intelligence'),
(5, 'Dr. S. Verma', 5, 'Cyber Security and Cryptography');


-- c) SQL Queries

-- a) List of Universities situated in Delhi:
	SELECT university_name, location 
	FROM University 
	WHERE location = 'Delhi';

-- b) List of all Departments of AMU:
	SELECT department_name
	FROM Department
	WHERE university_id = 1;
    
    --  c)Find the location of JNU:
    SELECT location
	FROM University 
	WHERE university_name = 'Jawaharlal Nehru University';

-- List of all Programs run by University of Jammu:
	SELECT program_name
	FROM Program
	WHERE department_id IN (SELECT department_id FROM Department WHERE university_id = 3);

-- List of Universities that run Program "MCA":
	SELECT DISTINCT u.university_name
	FROM University u
	JOIN Department d ON u.university_id = d.university_id
	JOIN Program p ON d.department_id = p.department_id
	WHERE p.program_name = 'MCA';

-- List of Courses of "MCA" run by AMU:
SELECT c.course_name
FROM Course c
JOIN Program p ON c.program_id = p.program_id
WHERE p.program_name = 'MCA' AND p.department_id = 1;

-- List of Faculties specialized in "Information Security" across different universities:
SELECT f.name, u.university_name
FROM Faculty f
JOIN Department d ON f.department_id = d.department_id
JOIN University u ON d.university_id = u.university_id
WHERE f.specialization = 'Information Security';

-- Syllabus of "Computer Architecture" from different Universities:
SELECT s.syllabus_details, u.university_name
FROM Syllabus s
JOIN Course c ON s.course_id = c.course_id
JOIN Program p ON c.program_id = p.program_id
JOIN Department d ON p.department_id = d.department_id
JOIN University u ON d.university_id = u.university_id
WHERE c.course_name = 'Computer Architecture';


