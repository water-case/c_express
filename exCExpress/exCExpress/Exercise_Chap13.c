#include "TH_lib_2.h"



void Problem13_01() {
	struct book {
		int id;
		char title[100];
		char author[20];
	};

	struct book var1 =  {1,"�ٶ��� �԰� �������","������ ��ÿ"};

	printf("{ %d, %s, %s }\n", var1.id, var1.title, var1.author);

}
void Problem13_02() {
	struct account {
		int number;
		char name[20];
		int balance;
	};

	struct account person = { 1,"ȫ�浿", 100000 };

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

	struct email num1 = { "�Ⱥθ���","chulsoo@hankuk.ac.kr","hsh@hankuk.ac.kr","�ȳ��ϼ���?","2010/9/1",1 };
	
	printf("���� : %s\n", num1.title);
	printf("������ : %s\n", num1.sender);
	printf("�߽��� : %s\n", num1.receiver);
	printf("���� : %s\n", num1.content);
	printf("��¥ : %s\n", num1.date);
	printf("�켱���� : %d\n", num1.pri);

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

	printf("(%d,%d)�� ��и� = %d\n", a.x, a.y, quadrant(a));
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
	printf("���� �߽��� : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("���� ������ : ");
	scanf("%lf", &c.radius);
	printf("���� ���� = %lf, ���ǵѷ� = %lf\n", area(c), perimeter(c));
}

struct food {
	char name[100];
	int calories;
};
void Problem13_09() {
	struct food food_array[3];

	int i;
	for (i = 0; i < 3; i++) {
		printf("�Ϸ絿�� ���� ���İ� Į�θ� �Է� : ");
		scanf("%s %d", &food_array[i].name, &food_array[i].calories);
	}

	int total = 0;
	for (i = 0; i < 3; i++) {
		total += food_array[i].calories;
	}
	printf("�� Į�θ� = %d\n", total);
}

struct employee {
	int id;
	char name[100];
	char phonenumber[100];
	int age;
};
void Problem13_10() {
	struct employee employees[10] = {
		{1313, "�ٺ�", "123123", 21},
		{1314, "����", "123124", 19},
		{1315, "����", "123125", 22},
		{1316, "�и�", "123126", 23},
		{1317, "���ӽ�", "123127", 30},
		{1318, "�κ�", "123128", 31},
		{1319, "���", "123129", 29},
		{1320, "�κ�", "123130", 27},
		{1321, "���", "123131", 30},
		{1322, "����", "123132", 31}
	};

	int i;
	for (i = 0; i < 10; i++) {
		if (employees[i].age >= 20 && employees[i].age <= 30) {
			printf("�̸� = %s ���� = %d\n", employees[i].name, employees[i].age);
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
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", numbers[i].name);
	printf("����ȭ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%s", numbers[i].homeNumber);
	printf("�޴�����ȣ�� �Է��Ͻÿ� : ");
	scanf("%s", numbers[i].phoneNumber);
	}
	
	char searchName[100];
	printf("�˻��� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", searchName);
	
	for (i = 0; i < 3; i++) {
		if (!strcmp(searchName, numbers[i].name)) {
			printf("����ȭ��ȣ : %s\n", numbers[i].homeNumber);
			printf("�޴�����ȣ : %s\n", numbers[i].phoneNumber);
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
	printf("������ Ÿ���� �Է��Ͻʽÿ�(0,1,2) : ");
	scanf("%d", &type);
	switch(type){
	case TRI:
		printf("�غ��� ���̸� �Է��Ͻÿ� : ");
		scanf("%d %d", &onething.tri.base, &onething.tri.height);
		printf("������ %d\n", onething.tri.base* onething.tri.height);
		break;
	case REC:
		printf("���ο� ������ ���̸� �Է��Ͻÿ� : ");
		scanf("%d %d", &onething.rect.width, &onething.rect.height);
		printf("������ %d\n", onething.rect.width * onething.rect.height);
		break;
	case CIRC:
		printf("�������� �Է��Ͻÿ� : ");
		scanf("%d", &onething.circ.radius);
		printf("������ %lf\n", 3.14*onething.circ.radius * onething.circ.radius);
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
	printf("1. �߰�\n");
	printf("2. ���\n");
	printf("3. �˻�\n");
	printf("4. ����\n");
	printf("==========================\n");
	printf("�������� �Է��Ͻÿ� : ");
}
void addMusic(MusicFile* musicList, int count) {
	printf("���� : ");
	scanf("%s", &musicList[count].name);
	printf("���� : ");
	scanf("%s", &musicList[count].singer);
	printf("��ġ : ");
	scanf("%s", &musicList[count].path);
	printf("�帣( 0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����) : ");
	int ch;
	scanf("%d", &ch);
	switch (ch) {
	case 0:
		strcpy(musicList[count].genre, "����");
		printf("\n");
		break;
	case 1:
		strcpy(musicList[count].genre, "��");
		printf("\n");
		break;
	case 2:
		strcpy(musicList[count].genre, "Ŭ����");
		printf("\n");
		break;
	case 3:
		strcpy(musicList[count].genre, "��ȭ����");
		printf("\n");
		break;
	}
}
void printMusicList(MusicFile* musicList, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("���� : %s\n", musicList[i].name);
		printf("���� : %s\n", musicList[i].singer);
		printf("��ġ : %s\n", musicList[i].path);
		printf("�帣 : %s\n", musicList[i].genre);
		printf("-------------------\n");
	}
}
void searchMusic(MusicFile* musicList, int count) {
	char search[100];
	int i;
	printf("�˻��Ͻ� �뷡�̸� : ");
	scanf("%s", &search);
	for (i = 0; i < count; i++) {
		if (!strcmp(search, musicList[i].name)) {
			printf("���� : %s\n", musicList[i].name);
			printf("���� : %s\n", musicList[i].singer);
			printf("��ġ : %s\n", musicList[i].path);
			printf("�帣 : %s\n", musicList[i].genre);
			printf("-------------------\n");
			break;
		}
		if (i == count - 1)
			printf("���� �̸��� �뷡�� �����ϴ�\n");
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
			printf("�����մϴ�\n");
			return 0;
			break;
		}
	}
}

void Exercise_Chap13() {
	Problem13_14();
}