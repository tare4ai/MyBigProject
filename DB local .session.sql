ALTER TABLE emp_khibarniy ADD dname VARCHAR(50);
UPDATE emp_khibarniy e
SET dname = (SELECT d.dname 
             FROM dept d 
             WHERE e.deptno = d.deptno);