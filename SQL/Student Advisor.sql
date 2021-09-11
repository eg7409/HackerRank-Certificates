/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/

SELECT s.roll_number,s.name from student_information AS  s, faculty_information AS f WHERE (s.advisor = f.employee_id and f.gender = 'M' and f.salary > 15000) or (s.advisor = f.employee_id and f.gender = 'F' and f.salary > 20000);
