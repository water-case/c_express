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

}


int equalb(struct point *a, struct point *b) {
	if (a->x == b->x && a->y == b->y)
		return 1;
	else
		return 0;
}
void Problem13_06() {
	struct point a = { 1,2 }, b = { 1,2 };
	struct point * n1 = &a, * n2 = &b;
	

	if (equalb(n1, n2))
		printf("(%d, %d) == (%d, %d)\n", a.x, a.y, b.x, b.y);
	else
		printf("(%d, %d) != (%d, %d)\n", a.x, a.y, b.x, b.y);
}

int quadrant(struct point p) {
	if (p.x > 0 && p.y > 0)
		return 1;
	else if (p.x < 0 && p.y>0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else if (p.x > 0 && p.y < 0)
		return 4;
	else
		return 0;
}
void Problem13_07() {
	struct point a = { -1,2 };

	printf("(%d,%d)의 사분면 = %d\n", a.x, a.y, quadrant(a));
}


struct circle {
	struct point center;
	double radius;
};
typedef struct circle CIRCLE;
double area(CIRCLE c) {
	return 3.14 * c.radius * c.radius;
}
double perimeter(CIRCLE c) {
	return 3.14 * 2 * c.radius;
}
void Problem13_08() {
	CIRCLE c;
	printf("원의 중심점 : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("원의 반지름 : ");
	scanf("%lf", &c.radius);
	printf("원의 면적 = %lf, 원의둘레 = %lf\n", area(c), perimeter(c));
}

struct food {
	char name[100];
	int calories;
};
void Problem13_09() {
	struct food food_array[3];

	int i;
	for (i = 0; i < 3; i++) {
		printf("하루동안 먹은 음식과 칼로리 입력 : ");
		scanf("%s %d", &food_array[i].name, &food_array[i].calories);
	}

	int total = 0;
	for (i = 0; i < 3; i++) {
		total += food_array[i].calories;
	}
	printf("총 칼로리 = %d\n", total);
}

struct employee {
	int id;
	char name[100];
	char phonenumber[100];
	int age;
};
void Problem13_10() {
	struct employee employees[10] = {
		{1313, "바비", "123123", 21},
		{1314, "보비", "123124", 19},
		{1315, "브라운", "123125", 22},
		{1316, "밀리", "123126", 23},
		{1317, "제임스", "123127", 30},
		{1318, "부비", "123128", 31},
		{1319, "라비", "123129", 29},
		{1320, "로비", "123130", 27},
		{1321, "루비", "123131", 30},
		{1322, "린비", "123132", 31}
	};

	int i;
	for (i = 0; i < 10; i++) {
		if (employees[i].age >= 20 && employees[i].age <= 30) {
			printf("이름 = %s 나이 = %d\n", employees[i].name, employees[i].age);
		}
	}
}

typedef struct numberList {
	char name[100];
	char homeNumber[14];
	char phoneNumber[14];
}numberLists;
void Problem13_11() {
	numberLists numbers[3];
	int i;
	for (i = 0; i < 3; i++) {
	printf("이름을 입력하시오 : ");
	scanf("%s", numbers[i].name);
	printf("집전화번호를 입력하시오 : ");
	scanf("%s", numbers[i].homeNumber);
	printf("휴대폰번호를 입력하시오 : ");
	scanf("%s", numbers[i].phoneNumber);
	}
	
	char searchName[100];
	printf("검색할 이름을 입력하시오 : ");
	scanf("%s", searchName);
	
	for (i = 0; i < 3; i++) {
		if (!strcmp(searchName, numbers[i].name)) {
			printf("집전화번호 : %s\n", numbers[i].homeNumber);
			printf("휴대폰번호 : %s\n", numbers[i].phoneNumber);
		}
	}
}

typedef struct card {
	int value;
	char suit;
}CARD;

void Problem13_12() {
	CARD cards[4][13];
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			cards[i][j].value = j+1;
			if (i == 0)
				cards[i][j].suit = 'c';
			else if (i == 1)
				cards[i][j].suit = 'd';
			else if (i == 2)
				cards[i][j].suit = 'h';
			else if (i == 3)
				cards[i][j].suit = 's';
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			printf("%d:%c ", cards[i][j].value, cards[i][j].suit);
		}
		printf("\n");
	}
}

struct shape {
	int type;
	union {
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	};
};
enum types {TRI, REC, CIRC};
void Problem13_13() {
	struct shape onething;
	enum types type;
	printf("도형의 타입을 입력하십시오(0,1,2) : ");
	scanf("%d", &type);
	switch(type){
	case TRI:
		printf("밑변과 높이를 입력하시오 : ");
		scanf("%d %d", &onething.tri.base, &onething.tri.height);
		printf("면적은 %d\n", onething.tri.base* onething.tri.height);
		break;
	case REC:
		printf("가로와 세로의 길이를 입력하시오 : ");
		scanf("%d %d", &onething.rect.width, &onething.rect.height);
		printf("면적은 %d\n", onething.rect.width * onething.rect.height);
		break;
	case CIRC:
		printf("반지름을 입력하시오 : ");
		scanf("%d", &onething.circ.radius);
		printf("면적은 %lf\n", 3.14*onething.circ.radius * onething.circ.radius);
		break;
	}
}

typedef struct musicFile {
	char name[100];
	char singer[100];
	char path[100];
	char genre[100];
}MusicFile;
void intro() {
	printf("==========================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("==========================\n");
	printf("정수값을 입력하시오 : ");
}
void addMusic(MusicFile* musicList, int count) {
	printf("제목 : ");
	scanf("%s", &musicList[count].name);
	printf("가수 : ");
	scanf("%s", &musicList[count].singer);
	printf("위치 : ");
	scanf("%s", &musicList[count].path);
	printf("장르( 0: 가요, 1: 팝, 2: 클래식, 3: 영화음악) : ");
	int ch;
	scanf("%d", &ch);
	switch (ch) {
	case 0:
		strcpy(musicList[count].genre, "가요");
		printf("\n");
		break;
	case 1:
		strcpy(musicList[count].genre, "팝");
		printf("\n");
		break;
	case 2:
		strcpy(musicList[count].genre, "클래식");
		printf("\n");
		break;
	case 3:
		strcpy(musicList[count].genre, "영화음악");
		printf("\n");
		break;
	}
}
void printMusicList(MusicFile* musicList, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("제목 : %s\n", musicList[i].name);
		printf("가수 : %s\n", musicList[i].singer);
		printf("위치 : %s\n", musicList[i].path);
		printf("장르 : %s\n", musicList[i].genre);
		printf("-------------------\n");
	}
}
void searchMusic(MusicFile* musicList, int count) {
	char search[100];
	int i;
	printf("검색하실 노래이름 : ");
	scanf("%s", &search);
	for (i = 0; i < count; i++) {
		if (!strcmp(search, musicList[i].name)) {
			printf("제목 : %s\n", musicList[i].name);
			printf("가수 : %s\n", musicList[i].singer);
			printf("위치 : %s\n", musicList[i].path);
			printf("장르 : %s\n", musicList[i].genre);
			printf("-------------------\n");
			break;
		}
		if (i == count - 1)
			printf("같은 이름의 노래가 없습니다\n");
	}
}
void Problem13_14() {
	int input, count = 0;
	MusicFile musicList[100];
	
	while (1) {
		intro();
		scanf("%d", &input);
		switch (input) {
		case 1:
			addMusic(musicList,count);
			count ++;
			break;
		case 2:
			printMusicList(musicList, count);
			break;
		case 3:
			searchMusic(musicList, count);
			break;
		case 4:
			printf("종료합니다\n");
			return 0;
			break;
		}
	}
}

void Exercise_Chap13() {
	Problem13_14();
}