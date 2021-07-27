#include "TH_lib_2.h"

#define DEBUG
#define POWER_TYPE 1
#ifdef DEBUG
#if POWER_TYPE == 0
int power2(int x, int y) {
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++) {
		printf("result = %d\n", __LINE__);
		result *= x;
	}
	return result;
#elif POWER_TYPE == 1
double power2(int x, int y) {
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++) {
		printf("result = %d\n", __LINE__);
		result *= x;
	}
	return result;
}
#endif
#endif
void Problem16_01() {
	power2(3, 5);
}


#define GET_MIN(x,y,z) ((x)>(y)) ? (((y)>(z)) ? (z) : (y)) : (((x)>(z)) ? (z) : (x))
void Problem16_02() {
	printf("%d\n", GET_MIN(4, 2, 3));
}

#define ARRAY_INIT(array, size, value) { int i; for(i=0;i<size;i++){ array[i] = value; } }
void Problem16_03() {
	int array[10];

	ARRAY_INIT(array, 10, 4);

	int i;
	printf("[ ");
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");
}

#define VOLUME(r,h) 3.141592*(r)*(r)*(h)
void Problem16_04() {
	int r, h;
	printf("원기둥의 반지름을 입력하시오 : ");
	scanf("%d", &r);
	printf("원기둥의 높이를 입력하시오 : ");
	scanf("%d", &h);
	printf("원기둥의 부피 : %lf\n", VOLUME(r, h));
}

#define IS_SPACE(c) ((c)=='\t') || ((c)=='\n') || ((c)==' ')
void Problem16_05() {
	char string[10];
	printf("문자열을 입력하시오: ");
	gets(string);

	int i=0, count=0;
	while(string[i] != NULL){
		if (IS_SPACE(string[i]))
			count++;
		i++;
	}
	printf("공백문자의 개수: %d\n", count);
}

#define SET_BIT(n, pos) (n) |= (1<<(pos))
#define CLR_BIT(n, pos) (n) &= ~(1<<(pos))
#define GET_BIT(n, pos) (n) & (1<<(pos))
void Problem16_06() {
	int n = 0x808081;
	printf("n = %#x\n", n);
	printf("GET_BIT(%d): %d\n", 0, GET_BIT(n,0));
	printf("SET_BIT(%d): %#x\n", 1, SET_BIT(n,1));
	printf("CLR_BIT(%d): %#x\n", 0, CLR_BIT(n, 0));
	printf("n = %#x\n", n);

}

void display_bit(int value) {
	int i;
	for (i = 31; i >= 0; i--) {
		if (GET_BIT(value, i))
			printf("1");
		else
			printf("0");
	}
}
void Problem16_07() {
	int n;
	printf("정수값을 입력하시오: ");
	scanf("%d", &n);
	display_bit(n);
	printf("\n");
}

void Problem16_08() {
	int n, direct, distance;
	printf("정수값을 입력하시오: ");
	scanf("%d", &n);
	printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오: ");
	scanf("%d", &direct);
	printf("이동시킬 거리: ");
	scanf("%d", &distance);

	printf("이동 전: ");
	display_bit(n);
	printf("\n");

	if (direct == 0) {
		n <<= distance;
	}
	else if (direct == 1) {
		n >>= distance;
	}
	printf("이동 후: ");
	display_bit(n);
	printf("\n");
}

void Problem16_09() {
	char str[100] = { 0, };
	printf("문자열을 입력하시오: ");
	gets(str);

	int i = 0;
	while (str[i] != NULL) {
		str[i] ^= 32;
		i++;
	}

	printf("결과 문자열: %s\n", str);
	for (i = 0; i < 10; i++) {
		printf("%c", str[i]);
	}
}

void Problem16_10() {
	char str[20] = "i am a boy";
	char str2[20] = { 0, };
	int i = 0;

	while (str[i] != NULL) {
		str2[i] = str[i] ^ 0b1010;
		i++;
	}

	printf("%s 가 %s로 인코딩됨\n", str, str2);

	i = 0;
	while (str[i] != NULL) {
		str[i] = str2[i] ^ 0b1010;
		i++;
	}
	printf("%s 가 %s로 디코딩됨\n", str2, str);
}

void Exercise_Chap16(char* argv[]) {
	Problem16_10();
}