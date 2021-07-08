# 문제 1
use cookDB;
create table emp(select dept_no as deptNo, dept_name as deptName from employees.departments);

# 문제 2
use cookDB;
select userID as '사용자 ID', sum(amount) as '총구매개수'
	from buytbl
    group by userid
    order by userid desc;


# 문제 3
use cookDB;
select userid as '사용자ID', avg(amount) as '평균구매개수'
	from buytbl
    group by userid
    having avg(amount) >= 2
    order by avg(amount) desc;
    

# 문제 4

select num, groupname, sum(amount) as '개수' 
	from buytbl 
	group by groupname,num
    with rollup;

# ------------------------------------------------------------------------

# 문제 5
select addr, row_number() over(partition by addr order by mdate asc) "지역별키큰순위", username, mdate from usertbl;

# 문제 6
select * from usertbl;
select username, addr, mdate as "가입일", 
	datediff(mdate, lead(mdate,1,0) over (order by mdate asc))*-1 as "다음 사람과의 가입 일자 차이"
    from usertbl;
    
# 문제 7
select season, 
	sum(case when uname = '유재석' then amount end) as '유재석',
	sum(case when uname = '강호동' then amount end) as '강호동'
from pivottest
group by season;
