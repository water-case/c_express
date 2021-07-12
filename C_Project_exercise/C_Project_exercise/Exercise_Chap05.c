#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void Problem5_01() {
	int num1, num2;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);

	printf("몫: %d 나머지: %d\n", num1 / num2, num1 % num2);
}
void Problem5_02() {
	double num1, num2;
	
	printf("실수를 입력하시오:");
	scanf("%lf %lf", &num1, &num2);

	printf("%lf %lf %lf %lf\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

}
void Problem5_03() {
	int num1, num2, num3;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("최대값:%d\n", (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3));

}
void Problem5_04() {
	int cm, feet;
	double inch;
	
	printf("키를 입력하시오(cm):");
	scanf("%d", &cm);

	inch = cm / 2.54;
	feet = inch / 12;
	

	printf("%dcm는 %d피트 %lf인치입니다", cm, feet, inch-((double)feet*12));
}
void Problem5_05() {
	int num;

	printf("정수를 입력하시오:");
	scanf("%d", &num);

	printf("십의 자리: %d\n",num/10);
	printf("일의 자리: %d\n",num%10);

}
void Problem5_06() {
	int num;

	printf("정수를 입력하시오:");
	scanf("%d", &num);

	printf("2의 보수: %d\n", ~num + 1);
}
void Problem5_07() {
	int num, shift;

	printf("정수를 입력하시오:");
	scanf("%d", &num);
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &shift);

	printf("%d<<%d의 값: %d\n", num, shift, num << shift);
}
void Problem5_08() {
	double radian;
	
	printf("구의 반지름을 입력하시오:");
	scanf("%lf", &radian);
	
	printf("표면적은 %lf입니다\n", 4*PI* pow(radian, 2));
	printf("체적은 %lf입니다\n", (double)4/3*PI*pow(radian,3));

}
void Problem5_09() {
	double ac, ae, bc;

	printf("지팡이의 높이를 입력하시오:");
	scanf("%lf", &bc);

	printf("지팡이 그림자의 길이를 입력하시오:");
	scanf("%lf", &ac);

	printf("피라미드까지의 거리를 입력하시오:");
	scanf("%lf", &ae);

	printf("피라미드의 높이는 %lf 입니다", ae*bc/ac);
}
void Problem5_10() {
	int x, y;

	printf("x 좌표를 입력하시오: ");
	scanf("%d", &x);
	printf("y 좌표를 입력하시오: ");
	scanf("%d", &y);

	printf("%d사분면\n", x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3));
}
void Problem5_11() {
	double km, degree;

	printf("거리를 입력하시오:");
	scanf("%lf", &km);
	printf("각도를 입력하시오:");
	scanf("%lf", &degree);

	printf("지구의 반지름은 %lf", (360/degree*km)/(2*PI));
}
void Problem5_12() {
	unsigned int a = 0, temp = 0;

	printf("첫번째 문자를 입력하시오: ");
	scanf("%c", &temp);
	getchar();
	a |= temp;
	temp = 0;
	
	printf("두번째 문자를 입력하시오: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 8;
	a |= temp;
	temp = 0;
	
	printf("세번째 문자를 입력하시오: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 16;
	a |= temp;
	temp = 0;

	printf("네번째 문자를 입력하시오: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 24;
	a |= temp;

	printf("결과값: %x\n",a);
}

void Exercise_Chap5() {
	Problem5_12();
}