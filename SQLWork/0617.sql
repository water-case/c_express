#스키마 생성
CREATE SCHEMA `shopdb` ; 

#테이블 생성
CREATE TABLE `shopdb`.`membertbl` (
  `memberID` CHAR(8) NOT NULL,
  `memberName` CHAR(8) NOT NULL,
  `memberAddress` CHAR(20) NULL); 

#테이블 제거
drop table `my_testTBL`;

#기본키 설정
ALTER TABLE `shopdb`.`membertbl` 
ADD PRIMARY KEY (`memberID`);
;

#데이터 추가
INSERT INTO `shopdb`.`membertbl` (`memberID`, `memberName`, `memberAddress`) 
VALUES ('Thomas', '토마스', '경기 부천시 중동');

#데이터 제거
DELETE FROM `shopdb`.`membertbl` WHERE (`memberID` = 'Ota');

#데이터 추출
select * from shopdb.membertbl;

CREATE TABLE `shopdb`.`productTBL` (
	`productName` CHAR(4) NOT NULL,
	`cost` INT NOT NULL,
    `makeDate` DATE NULL,
    `company` CHAR(5) NULL,
    `amount` INT NOT NULL);
    
select * from shopdb.membertbl;

create table `my_testTBL`(id INT);
drop table `my_testTBL`;

create table indexTBL(first_name varchar(14), last_name varchar(16), hire_date date);

insert into indexTBL
	select first_name, last_name, hire_date
	from employees.employees
    limit 500;
    
select * from indexTBL;

select * from indexTBL where first_name = 'mary';

create index inx_indexTBL_firstname on indexTBL(first_name);

create view uv_memberTBL
as select memberName, memberAddress from membertbl;

select * from uv_membertbl;

/*스토어 프로시저(함수)*/
DELIMITER //
create procedure myproc()
begin
	select * from membertbl where memberName = '토마스';
    select * from producttbl where productName = '냉장고';
end //
DELIMITER ;

call myproc();

#######위정리한내용
/*
create
schema table view index
drop = 테이블 스키마 삭제
insert 데이터추가
delete 데이터삭제
where절 조건에 관련된 것 추가
함수

select 속성 from 테이블 (where절);
insert into 속성 values 데이터;
delete from 테이블 (where절);
table 만들시 -> 속성에 대한 정의가 필요

*/

#트리거 : 테이블에 부착되어 테이블에 insert, update, delete 작업이 발생하면 실행되는 코드

insert into memberTBL values ('Soccer','흥민','서울시 서대문구 북가좌동');
select * from memberTBL;
update memberTBL set memberAddress = '서울 강남구 역삼동' where memberName = '흥민';
delete from membertbl where memberName = '흥민';

set SQL_SAFE_UPDATES = 0;

create table deletedMemberTBL (
	memberID char(8) ,
    memberName char(5) ,
    memberAddress char(20) ,
    deletedDate date -- 삭제한 날짜
);
select * from deletedMemberTBL;
DELIMITER //
CREATE TRIGGER trg_deletedMemberTBL   -- 트리거 이름
	AFTER DELETE  -- 삭제 후에 작동하게 지정
    ON memberTBL  -- 트리거를 부착할 테이블
    FOR EACH ROW  -- 각 행마다 적용시킴
BEGIN
	-- OLD 테이블의 내용을 백업테이블에 삽입
    INSERT INTO deletedMemberTBL
		VALUES (OLD.memberID, OLD.memberName, OLD.memberAddress, CURDATE() );
END //
DELIMITER ;

use employees;
select * from employees;

/*
select 문
select 속성 [from 테이블] [where 조건] [group by 속성] [having 조건] [order by desc / aesc / asc]
*/

drop database if exists cookDB; -- 만약 cookDB가 존재하면 우선 삭제한다.
create database cookDB;
use cookDB;
create table userTBL -- 회원 테이블1
(	userID char(8) not null primary key, -- 사용자 아이디(PK)
	userName varchar(10) not null, -- 이름
    birthYear int not null, -- 출생년도
    addr char(2) not null, -- 지역(경기,서울,경남 식으로 2글자만 입력)
    mobile1 char(3), -- 휴대폰의 국번(011,016 등)
    mobile2 char(8), -- 휴대폰의 나머지 전화번호(하이픈제외)
    height smallint, -- 키
    mDate date -- 회원 가입일
);
create table buyTBL -- 회원 구매 테이블 N
( 	num int auto_increment not null primary key, -- 순번(PK)
	userID char(8) not null, -- 아이디(FK)
    prodName char(6) not null, -- 물품명
    groupName char(4) , -- 분류
    price int not null, -- 단가
	amount smallint not null, -- 수량
    foreign key (userID) references userTBL(userID) -- 외래키 설정
);


insert into userTBL values('YJS','유재석',1972,'서울','010','11111111',178,'2008-8-8');
insert into userTBL values('KHD','강호동',1970,'경북','011','22222222',182,'2007-7-7');
insert into userTBL values('KKJ','김국진',1965,'서울','019','33333333',171,'2009-9-9');
insert into userTBL values('KYM','김용만',1967,'서울','010','44444444',177,'2015-5-5');
insert into userTBL values('KJD','김제동',1974,'경남',null,null,173,'2013-3-3');
insert into userTBL values('NHS','남희석',1971,'충남','016','66666666',180,'2017-4-4');
insert into userTBL values('SDY','신동엽',1971,'경기',null,null,176,'2008-10-10');
insert into userTBL values('LHJ','이휘재',1972,'경기','011','88888888',180,'2006-4-4');
insert into userTBL values('LKK','이경규',1960,'경남','018','99999999',170,'2004-12-12');
insert into userTBL values('PSH','박수홍',1970,'서울','010','00000000',183,'2012-5-5');



insert into buyTBL values(null,'KHD','운동화',null,30,2);
insert into buyTBL values(null,'KHD','노트북','전자',1000,1);
insert into buyTBL values(null,'KYM','모니터','전자',200,1);
insert into buyTBL values(null,'PSH','모니터','전자',200,5);
insert into buyTBL values(null,'KHD','청바지','의류',50,3);
insert into buyTBL values(null,'PSH','메모리','전자',80,10);
insert into buyTBL values(null,'KJD','책','서적',15,5);
insert into buyTBL values(null,'LHJ','책','서적',15,2);
insert into buyTBL values(null,'LHJ','청바지','의류',50,1);
insert into buyTBL values(null,'PSH','운동화',null,30,2);
insert into buyTBL values(null,'LHJ','책','서적',15,1);
insert into buyTBL values(null,'PSH','운동화',null,30,2);


select * from cookdb.buytbl;


select userID, userName from userTBL where birthYear >= 1970 and height >= 182;
select userID, userName from userTBL where birthYear >= 1970 or height >= 182;
select userName, height from userTBL where height >= 180 and height <= 182;
select userName, height from userTBL where height between 180 and 182;
select userName, addr from userTBL where addr='경남' or addr='충남' or addr='경북';
select userName, addr from userTBL where addr in('경남','충남','경북');
select userName, height from userTBL where userName like '김%';
select userName, height from userTBL where userName like '_경규';
select userName, height from userTBL where height > 177;



select userName, height from userTBL
	where height > (select height from userTBL where userName = '김용만');

select userName, height from userTBL
	where height >= (select height from userTBL where addr = '경기');
    
select userName, height from userTBL
	where height >= any (select height from userTBL where addr = '경기');

select userName, height from userTBL
	where height = any (select height from userTBL where addr = '경기');

select userName, height from userTBL
	where height in (select height from userTBL where addr = '경기');
    
    
    

select userName, mDate from userTBL order by mDate;

select userName, mDate from userTBL order by mDate desc;

select userName, height from userTBL order by height DESC, userName ASC;




select addr from userTBL;

select distinct addr from userTBL;




use employees;
select emp_no, hire_date from employees
	order by hire_date asc;
    
select emp_no, hire_date from employees
	order by hire_date asc
    limit 5;
    
select emp_no, hire_date from employees
	order by hire_date asc
	limit 0, 5; -- LIMIT 5 OFFSET 0 과 동일

