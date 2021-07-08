/* 숫자형	
bit(n)			N/8
tinyint			1
bool			1
boolean			
smallint		2
mediumint		3
int				4
integer
digint			8

float			4
double			8
real			
decimal(m,[d])
dec(m,[d])
fixed(m,[d])	7~15
number(m,[d])
*/
/* 문자형
char
varchar
binary
varbinary
text
blob 영상
enum
set
*/
/* 날짜
date
time
datetime
timestamp
year
*/
/* 기타
geometry
point
linestring
polygon
json
*/
/* show variables like 'character_set_system';

select cast('2020-10-19 12:35:29.123' as date) as 'date';
select cast('2020-10-19 12:35:29.123' as time) as 'time';
select cast('2020-10-19 12:35:29.123' as datetime) as 'datetime';

use cookdb;
set @myVar1 = 5;
set @myVar2 = 3;
set @myVar3 = 4.25;
set @myVar4 = 'MC 이름==> ';
select @myVar1;
select @myVar2 + @myVar3;
select @myVar4, username from usertbl where height > 180;

set @myVar1 = 3;
prepare myQuery
	from  'select username, height from usertbl order by height limit ?';
execute myquery using @myVar1;

*/
/* use cookdb;
select avg(amount) as '평균 구매 개수' from buytbl;

select cast(avg(amount) as signed integer) as '평균 구매 개수' from buytbl;
select convert(avg(amount), signed integer) as '평균 구매 개수' from buytbl;

select cast('2020$12$12' as date);
select cast('2020/12/12' as date);
select cast('2020%12%12' as date);
select cast('2020@12@12' as date);

select num, concat(cast(price as char(10)), 'x', cast(amount as char(4)), '=') as '단가X수량',
	price*amount as '구매액'
	from buytbl;

select '100' + '200'; -- 문자와 문자를 더함 ( 정수료 변환되서 연산됨 )
select concat('100', '200'); -- 문자와 문자를 연결 ( 문자로 처리 )
select concat(100, '200'); -- 정수와 문자를 연결 ( 정수가 문자로 변환되서 처리 )
select 1 > '3mega'; -- 정수인 3으로 변환되어서 비교
select 4 > '3MEGA'; -- 정수인 3으로 변환되어서 비교
select 0 = 'mega3'; -- 문자는 0으로 변환됨
*/
/* select if(100>200, '참이다','거짓이다');
select ifnull(null, '널이군요'), ifnull(100,'널이군요');
select nullif(100,100),ifnull(200,100);

select case 10
		when 1 then '일'
        when 1 then '오'
        when 1 then '십'
        else '모름'
	end;
    
select ascii('A'), char(65);

select bit_length('abc'), char_length('abc'), length('abc');
select bit_length('가나다'), char_length('가나다'), length('가나다');

select concat_ws('/','2020','01','01');

select elt(2,'하나','둘','셋'), field('둘','하나','둘','셋'), find_in_set('둘','하나,둘,셋'),instr('하나둘셋','둘'), locate('둘','하나둘셋');

select format(123456.123456, 4);

select bin(31), hex(31), oct(31);
*/
/* select insert('abcdefghi',3,4,'@@@@'), insert('abcdefghi',3,2,'@@@@');
select left('abcdefghi',3), right('abcdefghi',3);
select lower('abcdEFGH'), upper('abcdefghi');
select lpad('쿡북',5,'##'), rpad('쿡북',5,'##');
select ltrim('   쿡북'), rtrim('쿡북    ');
select trim('   쿡북     '), trim(both 'ㅋ' from 'ㅋㅋㅋ재미있어요.ㅋㅋㅋ');
select replace('IT 쿡북 MySQL', '쿡북','CookBook');
select reverse('MySQL');
select concat('IT', space(10),'CookBook MySQL');
select substring('대한민국만세',3,2);
select substring_index('www.mysql.com','.',2), substring_index('www.mysql.com','.',-2);
select abs(-100);
select ceiling(4.7), floor(4.7), round(4.7);
*/
/* select conv('AA',16,2), conv(100,10,8); # 진법변환
select degrees(pi()), radians(180); # 라디언 값을 각도 값으로 변환, 각도를 라디언값으로 변환
select mod(157,10), 157%10, 157 mod 10; # 나머지 값
select pow(2,3), sqrt(9); # 거듭제곱, 제곱근
select rand(), floor(1 + (rand() * (6-1)) ); # 난수
select sign(100), sign(0), sign(-100.123); # 숫자가 양수, 0, 음수인지 구분
select truncate(12345.12345, 2), truncate(12345.12345,-2); # 소수점을 기준으로 정수 위치까지 구하고 버림
*/
/* select adddate('2020-01-01',interval 31 day) , adddate('2020-01-01',interval 1 month);
select subdate('2020-01-01',interval 31 day) , subdate('2020-01-01',interval 1 month);
select addtime('2020-01-01 23:59:59', '1:1:1'), addtime('15:00:00','2:10:10');
select subtime('2020-01-01 23:59:59', '1:1:1'), subtime('15:00:00','2:10:10');
select year(curdate()), month(current_date()), dayofmonth(current_date);
select hour(curdate()), month(current_time()), second(current_time), microsecond(current_time);
select date(now()), time(now());
select datediff('2023-01-01',now()), timediff('23:23:59','12:11:10');

select dayofweek(curdate()), monthname(curdate()), dayofyear(curdate());
select last_day('2020-02-01');
select makedate(2020, 32);
select maketime(12, 11, 10);
select period_add(202001, 11), period_diff(202001, 201812);
select quarter('2020-07-07');
select time_to_sec('12:11:10');
*/
/* select current_user(), database();

use cookdb;
select * from usertbl;
select found_rows();

use cookdb;
update buytbl set price=price*2;
select row_count();
select * from buytbl;

select sleep(5);
select '5초후에 이게 보여요';
*/
/* use cookdb;
select json_object('name',username, 'height', height) as 'JSON 값'
	from usertbl
	where height >= 180;
    
set @json = '{ "userTBL" :
	[
		{"name":"강호동","height":182},
        {"name":"이휘재","height":180},
        {"name":"남희석","height":180},
        {"name":"박수홍","height":183}
	]
}' ;

select JSON_VALID(@json) as JSON_VALID;
select JSON_SEARCH(@json, 'one','남희석') as JSON_SEARCH;
select json_extract(@json,'$.userTBL[2].name') as json_extract;
select json_insert(@json, '$.userTBL[0].mdate','2019-0909') as json_insert;
select json_replace(@json, '$.userTBL[0].name','토마스') as json_replace;
select json_remove(@json, '$.userTBL[0]') as json_remove;
*/
/* create database movieDB;

use moviedb;
create table movieTBL (
	movie_id		int,
    movie_title		varchar(30),
    movie_director	varchar(20),
    movie_star		varchar(20),
    movie_script	longtext,
    movie_film		longblob
) default charset = utf8mb4;
*/
/* show variables like 'max_allowed_packet';
show variables like 'secure_file_priv';

truncate movieTBL;

insert into movieTBL values (1, '쉰들러 리스트','스필버그','리암니슨',
	LOAD_FILE('C:/MySQL/Movies/Schindler.txt'), LOAD_FILE('C:/MySQL/Movies/Schindler.mp4'));
insert into movieTBL values (2, '쇼생크 탈출','프랭크 다라본트','팀 로빈스',
	LOAD_FILE('C:/MySQL/Movies/Shawshank.txt'), LOAD_FILE('C:/MySQL/Movies/Shawshank.mp4'));
insert into movieTBL values (3, '라스트 모히칸','마이클 만','다니엘 데이 루이스',
	LOAD_FILE('C:/MySQL/Movies/Mohican.txt'), LOAD_FILE('C:/MySQL/Movies/Mohican.mp4'));
select * from movietbl;
*/
/* select movie_script from movietbl where movie_id = 1
	into outfile 'C:/MySQL/Movies/Schindler_out.txt'
    lines terminated by '\\n';
    
select movie_film from movietbl where movie_id=3
	into dumpfile 'C:/MySQL/Movies/Mohican_out.mp4';
*/
/* # 조인 ( join )
# 데이터를 가지고 있는 테이블을 원하는 형식으로 출력하는 방법
# Innder Join : A테이블과 B테이블의 교집합을 추출
# Left-Outer Join : A테이블 기준으로 B테이블과 합집합
# Right-Outer Join : B테이블 기준으로 A테이블과 합집합
# Full-Outer Join : A테이블과 B테이블의 합집합
# 조인하려면 외래키가 필요

select buytbl.userid, username, prodname, addr, concat(mobile1, mobile2) as '연락처'
	from buytbl
		inner join usertbl
			on buytbl.userid = usertbl.userid;

select *
	from buytbl
		inner join usertbl
			on buytbl.userid = usertbl.userid
	where buytbl.userid = "KYM";
    
select B.userid, U.username, B.prodname, U.addr, concat(U.mobile1, U.mobile2) as '연락처'
	from buytbl B
		inner join usertbl U
			on B.userid = U.userid;
	
select * from buytbl;
select * from usertbl;

select distinct B.userid, U.username
	from buytbl B
		inner join usertbl U
			on b.userid = u.userid;

select distinct U.userid, U.username
	from usertbl U
    where exists (
		select * 
        from buytbl B
        where U.userid = B.userid);

*/
/* create table stdtbl
( 	stdname varchar(10) not null primary key,
	addr char(4) not null
);
create table clubtbl
( 	clubname varchar(10) not null primary key,
	roomno char(4) not null
);
create table stdclubtbl
( 	num int auto_increment not null primary key,
	stdname varchar(10) not null,
	clubname varchar(10) not null,
foreign key(stdname) references stdtbl(stdname),
foreign key(clubname) references clubtbl(clubname)
);

insert into stdtbl values ('강호동','경북'),('김제동','경남'),('김용만','서울'),('이휘재','경기'),('박수홍','서울');
insert into clubtbl values ('수영','101호'),('바둑','102호'),('축구','103호'),('봉사','104호');
insert into stdclubtbl values (NULL, '강호동','바둑'),(NULL, '강호동','축구'),(NULL, '김용만','축구'),(NULL, '이휘재','축구'),(NULL, '이휘재','봉사'),(NULL, '박수홍','봉사');

select S.stdname, S.addr, C.clubname, C.roomno
	from stdtbl S
		inner join stdclubtbl SC
			on S.stdname = SC.stdname
		inner join clubtbl C
			on SC.clubname = C.clubname
	order by S.stdname;
    
select C.clubname, C.roomno, S.stdname, S.addr
	from stdtbl S
		inner join stdclubtbl SC
			on S.stdname = SC.stdname
		inner join clubtbl C
			on SC.clubname = C.clubname
	order by C.clubname;

select * from stdtbl;
select * from clubtbl;
select * from stdclubtbl;
*/
/*
*/
/*
*/
/*
*/
/*
*/

select u.userid, u.username, b.prodname, u.addr, concat(u.mobile1, u.mobile2) as '연락처'
	from usertbl u
		left outer join buytbl b
			on u.userid = b.userid
		order by u.userid;

select u.userid, u.username, b.prodname, u.addr, concat(u.mobile1, u.mobile2) as '연락처'
	from buytbl b
		right outer join usertbl u
			on u.userid = b.userid
		order by u.userid;

select u.userid, u.username, b.prodname, u.addr, concat(u.mobile1, u.mobile2) as '연락처'
	from usertbl u
		left outer join buytbl b
			on u.userid = b.userid
	where b.prodName is null
	order by u.userid;
    

select s.stdname, s.addr, c.clubname, c.roomno
	from stdtbl s
		left outer join stdclubtbl sc
			on s.stdname = sc.stdname
		left outer join clubtbl c
			on sc.clubname = c.clubname
	order by s.stdname;
    
select c.clubname, c.roomno, s.stdname, s.addr
	from stdtbl s
		left outer join stdclubtbl sc
			on sc.stdname = sc.stdname
		right outer join clubtbl c
			on sc.clubname = c.clubname
	order by c.clubname;

# 완전 외부 조인
select s.stdname, s.addr, c.clubname, c.roomno
	from stdtbl s
		left outer join stdclubtbl sc
			on s.stdname = sc.stdname
		left outer join clubtbl c
			on sc.clubname = c.clubname
union
select s.stdname, s.addr, c.clubname, c.roomno
	from stdtbl s
		left outer join stdclubtbl sc
			on s.stdname = sc.stdname
		right outer join clubtbl c
			on sc.clubname = c.clubname;
            

use employees;
select count(*) as '데이터개수'
	from employees
		cross join titles;
        

use cookdb;
create table emptbl (emp char(3), manager char(3), emptel varchar(8));

insert into emptbl values('나사장',NULL,'0000');
insert into emptbl values('김재무','나사장','2222');
insert into emptbl values('김부장','김재무','2222-1');
insert into emptbl values('이부장','김재무','2222-2');
insert into emptbl values('우대리','이부장','2222-2-1');
insert into emptbl values('지사원','이부장','2222-2-2');
insert into emptbl values('이영업','나사장','1111');
insert into emptbl values('한과장','이영업','1111-1');
insert into emptbl values('최정보','나사장','3333');
insert into emptbl values('윤차장','최정보','3333-1');
insert into emptbl values('이주임','윤차장','3333-1-1');


select a.emp as '부하직원', a.manager as '직속상관', b.emptel as '직속상관연락처'
	from emptbl a
		left join emptbl b
			on a.manager = b.emp
	where a.emp = '우대리';


select stdname, addr from stdtbl
	union all
select clubname, roomno from clubtbl;

select username, concat(mobile1, '-', mobile2) as '전화번호' from usertbl
	where username not in ( select username from usertbl where mobile1 is null);

select username, concat(mobile1, mobile2) as '전화번호' from usertbl
	where username in ( select username from usertbl where mobile1 is null);


