drop procedure if exists ifProc;
delimiter $$
create procedure ifProc()
begin
	declare var1 int;
    set var1 = 100;
    
    if var1 = 100 then
		select '100입니다.';
	else
		select '100이 아닙니다.';
	end if;
end $$
delimiter ;
call ifProc();

drop procedure if exists ifProc2;
use employees;
delimiter $$
create procedure ifProc2()
begin
	declare hiredate date;
    declare curdate date;
    declare days int;
    select hire_date into hiredate
		from employees.employees;
	
    set curdate = current_date();
    set days = datediff(curdate, hiredate);
    if(days/365) >= 5 then
		select concat('입사한지 ', days, '일이나 지났습니다. 축하합니다!') as '메시지';
	else
		select '입사한지 ' + days + '일밖에 안되었네요. 열심히 일하세요.' as '메시지';
	end if;
end $$
delimiter ;
call ifProc2();


drop procedure if exists caseProc;
delimiter $$
create procedure caseproc()
begin
	declare point int;
    declare credit char(1);
    set point = 77;
    
    case
		when point >= 90 then
			set credit = 'A';
		when point >= 80 then
			set credit = 'B';
		when point >= 70 then
			set credit = 'C';
		when point >= 60 then
			set credit = 'D';
		else
			set credit = 'F';
	end case;
    select concat('취득점수 ==>',point), concat('학점 ==>', credit);
end $$
delimiter ;
call caseproc();


drop procedure if exists test;
use cookdb;
delimiter $$
create procedure test(in total int)
begin
    declare grade char(5);
	
    select sum(amount*price) from cookdb.buytbl;
    
    case
		when total >= 3000 then
			set grade = '최우수고객';
		when total >= 1 then
			set grade = '일반고객';
		else
			set grade = '유령고객';
	end case;
    
	select u.userid, u.username, sum(b.price*b.amount) as '총구매액', (
		case 
			when sum(b.price*b.amount) >=3000 then '최우수고객'
            when sum(b.price*b.amount) >= 1 then '일반고객'
			else '유령고객'
		end
    ) as '고객등급' from buytbl b
	right outer join usertbl u
			on u.userid = b.userid
    group by userid
    order by sum(b.price*b.amount) desc;
    
   
    
end $$
delimiter ;
call test();




select u.userid, u.username, sum(price*amount) as '총구매액' from usertbl U
	inner join buytbl B
		on U.userid = B.userid
	order by sum(price*amount);
    
    
select u.userid, u.username, sum(b.price*b.amount) as '총구매액', grade as '고객등급' from buytbl b
	right outer join usertbl u
			on u.userid = b.userid
    group by userid
    order by sum(b.price*b.amount) desc;
		

select u.userid, u.username, sum(b.price*b.amount) as '총구매액', (
		case 
			when sum(b.price*b.amount) >=3000 then '최우수고객'
            when sum(b.price*b.amount) >= 1 then '일반고객'
			else '유령고객'
		end
    ) as '고객등급' from buytbl b
	right outer join usertbl u
			on u.userid = b.userid
    group by userid
    order by sum(b.price*b.amount) desc;