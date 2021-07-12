#include "TH_lib_2.h"



void Problem13_01() {
	struct book {
		int id;
		char title[100];
		char author[20];
	};

	struct book var1 =  {1,"바람과 함게 사라지다","마가렛 미첼"};

	printf("{ %d, %s, %s }\n", var1.id, var1.title, var1.author);

}
void Problem13_02() {
	struct account {
		int number;
		char name[20];
		int balance;
	};

	struct account person = { 1,"홍길동", 100000 };

	printf("{ %d, %s, %d }\n", person.number, person.name, person.balance);
}
void Problem13_03() {
	struct email {
		char title[20];
		char sender[20];
		char receiver[20];
		char content[100];
		char date[20];
		int pri;
	};

	struct email num1 = { "안부메일","chulsoo@hankuk.ac.kr","hsh@hankuk.ac.kr","안녕하세요?","2010/9/1",1 };
	
	printf("제목 : %s\n", num1.title);
	printf("수신자 : %s\n", num1.sender);
	printf("발신자 : %s\n", num1.receiver);
	printf("내용 : %s\n", num1.content);
	printf("날짜 : %s\n", num1.date);
	printf("우선순위 : %d\n", num1.pri);

}

struct compl {
	double real, imag;
};
void compl_add(struct compl c1, struct compl c2) {
	printf("%lf + %lfi\n", c1.real + c2.real, c1.imag + c2.imag);
}
void Problem13_04() {
	

	struct compl c1 = { 3,4 };
	struct compl c2 = { 4,5 };
		
	compl_add(c1, c2);

	
}

struct point {
	int x, y;
};
int equal(struct point a, struct point b) {
	if (a.x == b.x && a.y == b.y)
		return 1;
	else
		return 0;
}
void Problem13_05() {
	struct point a = { 1,2 }, b = { 1,2 };

	if (equal(a, b))
		printf("(%d, %d) == (%d, %d)\n", a.x, a.y, b.x, b.y);
	else
		printf("(%d, %d) != (%d, %d)\n", a.x, a.y, b.x, b.y);

	system("pause");
}

void Problem13_06() {

}

void Problem13_07() {

}
void Problem13_08() {

}
void Problem13_09() {

}
void Problem13_10() {

}
void Problem13_11() {

}
void Problem13_12() {

}
void Problem13_13() {

}
void Problem13_14() {

}

void Exercise_Chap13() {
	Problem13_05();
}