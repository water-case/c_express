USE cookDB;
create table buyTBL2 (select * from buyTBL);
select * from buyTBL2;
select * from buyTBL;

create table buyTBL3 (select userID, prodName From buyTBL);
select * from buyTBL3;

# GROUP By ... HAVING
# 함수
# AVG() : 평균	
# MIN() : 최소값
# MAX() : 최대값
# COUNT() : 행의 개수
# COUNT(DISTINCT) : 중복제거 행의 개수
# STDEV() : 표준편차
# VAR_SAMP() : 분산

select userID, amount from buytbl order by userID;
select userID, SUM(amount) from buytbl group by userID;
select userID AS '사용자 아이디', sum(amount) as '총 구매 개수'
	from buytbl group by userID;
select userID AS '사용자 아이디', sum(price*amount) as '총 구매 액'
	from buytbl group by userID;
select avg(amount) as '평균 구매 개수' from buytbl;
select userID, AVG(amount) as '평균 구매 개수'
	from buytbl group by userID;
select userName, MAX(height), MIN(height) from userTBL;
select userName, MAX(height), MIN(height) 
	from userTBL GROUP BY userName;




select userName, height
	from usertbl
    where height = (select max(height) from usertbl)
		or height = (select min(height) from usertbl);

select count(*) from usertbl;

select count(mobile1) as '휴대폰이 있는 사용자' from usertbl;




select userid as '사용자', sum(price*amount) as '총구매액'
	from buytbl
    group by userid;

select userid as '사용자', sum(price*amount) as '총구매액'
	from buytbl
    where sum(price*amount) > 1000
    group by userid;
    
select userid as '사용자', sum(price*amount) as '총구매액'
	from buytbl
    group by userid
    having sum(price*amount) > 1000;
    
select userid as '사용자', sum(price*amount) as '총구매액'
	from buytbl
    group by userid
    having sum(price*amount) > 1000
    order by sum(price*amount);
    
    
    
select num, groupname, sum(price * amount) as '비용'
	from buytbl
    group by groupname, num
    with rollup;
       
select groupname, sum(price*amount) as '비용'
	from buytbl
    group by groupname
    with rollup;
    

# DML 데이터 조작어
# 데이터를 검색 및 삽입, 수정, 삭제하는데 사용하는 언어
# select, insert, update, delete
# 트랜잭션이 발생하는 SQL문도 DML에 해당
#
# DDL 데이터 정의어
# 데이터베이스, 테이블, 뷰, 인덱스 등의 데이터베이스 개체를 생성, 삭제, 변경하는 데 사요하는 언어
# create, drop, alter, truncate문 등
# 트랜잭션 발생 하지 않음 즉시 적용됨
#
# DCL 데이터 제어어
# 사용자에게 어떤 권한을 부여하거나 빼앗을 때 사용하는 언어
# grant, recoke, deny문등

use cookdb;
create table testtbl1 (id int, username char(3), age int);
insert into testtbl1 values (1, '뽀로로',16);

insert into testtbl1(id, username) values(2, '크롱');

insert into testtbl1(username, age, id) values ('루피',14,3);

select * from testtbl1;

use cookdb;
create table testtbl2
	(id int AUTO_INCREMENT PRIMARY KEY,
	username char(3),
    age int);
insert into testtbl2 values (null, '에디',15);
insert into testtbl2 values (null, '포비',12);
insert into testtbl2 values (null, '통통이',11);
select * from testtbl2;

alter table testtbl2 auto_increment=100;
delete from testtbl2 where username = '패티';
insert into testtbl2 values (null, '패티',13);
select * from testtbl2;

create table testtbl3
	(id int auto_increment primary key,
	username char(3),
    age int);
alter table testtbl3 auto_increment=1000;
set @@auto_increment_increment=3;
insert into testtbl3 values(null,'우디',20);
insert into testtbl3 values(null,'버즈',18);
insert into testtbl3 values(null,'제시',19);
select * from testtbl3;

insert into testtbl3 values (null,'로이',17),(null,'스토리',18),(null,'무비',19);
select * from testtbl3;



create table testtbl4 (id int, Fname varchar(50), Lname varchar(50));
insert into testtbl4
	select emp_no, first_name, last_name
		from employees.employees;
select * from testtbl4;
        
create table testtbl5
	(select emp_no, first_name, last_name from employees.employees);
select * from testtbl5 limit 3;

create table testtbl6
	(select emp_no as id, first_name as Fname, last_name as Lname
		from employees.employees);
select * from testtbl5 limit 3;



update testtbl4
	set Lname = '없음'
    where Fname = 'Kyichi';
    
update buytbl set price = price * 1.5;


use cookdb;
delete from testtbl4 where Fname = 'Aamer';

delete from testtbl4 where Fname = 'Aamer' limit 5;


create table bigtbl1 (select * from employees.employees);
create table bigtbl2 (select * from employees.employees);
create table bigtbl3 (select * from employees.employees);

# 로그를 기록하는 작업을 하기 때문에 삭제 하는데 시간이 오래 걸림
delete from bigtbl1;
# 테이블 자체를 삭제하고 로그기록을 하지 않는다
drop table bigtbl2;
# 로그를 기록하지 않고 테이블은 남아 있는다
truncate table bigtbl3;


create table membertbl (select userid, username, addr from usertbl limit 3); -- 3건만 가져옴

alter table membertbl
	add constraint pk_mtmbertbl primary key (userid); -- pk를 지정함
select * from membertbl;

insert into membertbl values('KHD', '강후덜','미국');
insert into membertbl values('LSM', '이상민','서울');
insert into membertbl values('KSJ', '김성주','경기');
select * from membertbl;

insert into membertbl values('KHD','강후덜','미국')
	on duplicate key update username = '강후덜', addr = '미국';
insert into membertbl values('DJM','동짜몽','일본')
	on duplicate key update username = '동짜몽', addr = '일본';
SELECT * FROM MEMBERTBL;

insert ignore into memtbl values('KHD', '강후덜','미국');
insert ignore into memtbl values('LSM', '이상민','서울');
insert ignore into memtbl values('KSJ', '김성주','경기');
select * from membertbl;



select  row_number() over(order by height desc) "키큰순위", username, addr height from usertbl;
select  row_number() over(order by height desc, username asc) "키큰순위", username, addr height from usertbl;
select addr, row_number() over(partition by addr order by height desc, username asc) "지역별키큰순위", username, addr height from usertbl;
select  dense_rank() over(order by height desc) "키큰순위", username, addr height from usertbl;
select  rank() over(order by height desc) "키큰순위", username, addr height from usertbl;
select  ntile(2) over(order by height desc) "반번호", username, addr height from usertbl;
select  ntile(4) over(order by height desc) "반번호", username, addr height from usertbl;


# lead 열이름, 다음 행 위치, 다음 행이 없을 경우 출력 값 순서로 지정한다.
select username, addr, height as "키",
	height - (lead(height,1,0) over (order by height desc)) as "다음 사람과 키 차이"
    from usertbl;

select addr, username, height as "키",
	height - (first_value(height) over (partition by addr order by height desc)) as "지역별 최대키와 차이"
    from usertbl;

# cume_dist 값의 그룹에 있는 값의 누적 분포치를 계산
select addr, username, height as "키",
	(cume_dist() over (partition by addr order by height desc)) * 100 as "누적인원 백분율%"
    from usertbl;



create table pivottest
	(	uname char(3),
		season char(2),
        amount int);

    
insert into pivottest values ('유재석','겨울',10);
insert into pivottest values ('강호동','여름',15);
insert into pivottest values ('유재석','가을',25);
insert into pivottest values ('유재석','봄',3);
insert into pivottest values ('유재석','봄',37);
insert into pivottest values ('강호동','겨울',40);
insert into pivottest values ('유재석','여름',14);
insert into pivottest values ('유재석','겨울',22);
insert into pivottest values ('강호동','여름',64);
select * from pivottest;

# 피벗은 한 열에 포함된 여러 값을 여러 열로 변환하여 출력하고 필요하면 집계까지 수행하는 기능
select uname,
	sum(case when season = '봄' then amount end) as '봄',
	sum(case when season = '여름' then amount end) as '여름',
    sum(case when season = '가을' then amount end) as '가을',
    sum(case when season = '겨울' then amount end) as '겨울'
from pivottest
group by uname;


select userid as '사용자', sum(price*amount) as '총구매액'
	from buytbl group by userid;

with abc(userid, total)
as
(select userid, sum(price*amount)
	from buytbl group by userid)
select * from abc order by total desc;

select addr, max(height) from usertbl group by addr;

with cte_usertbl(addr, maxheight)
as
	( select addr, max(height) from usertbl group by addr)
select avg(maxheight*1.0) as '각 지역별 최고키의 평균' from cte_usertbl;



