#include <stdio.h>

void Problem3_01(){
	double num1, num2, num3;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num1);
	printf("실수를 입력하시오: ");
	scanf("%lf", &num2);
	printf("실수를 입력하시오: ");
	scanf("%lf", &num3);
	
	double sum = num1 + num2 + num3;
	double avg = sum / 3;

	printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);
}

void Problem3_02() {
	double mile;

	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);
	
	double meter = 1609.0 * mile;

	printf("%lf마일은 %lf미터입니다.\n", mile, meter);

}

void Problem3_03() {
	double height, base;

	printf("삼각형의 밑변: ");
	scanf("%lf", &height);
	printf("삼각형의 높이: ");
	scanf("%lf", &base);
	
	double area = height * base * 0.5;
	
	printf("삼각형의 넓이: %lf\n", area);
}

void Problem3_04() {
	double f;

	printf("화씨값을 입력하시오: ");
	scanf("%lf", &f);

	double c = (5.0 / 9.0) * (f - 32.0);

	printf("섭씨값은 %lf도입니다.\n", c);
}

void Problem3_05() {
	double x;

	printf("실수를 입력하세요: ");
	scanf("%lf", &x);

	double y = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %lf\n", y);
}

void Problem3_06() {
	double weight_on_earth;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon = weight_on_earth * 0.17;

	printf("달에서의 몸무게는 %lfKG입니다.\n", weight_on_moon);
}

void Exercise_Chap3() {
	Problem3_01();
	Problem3_02();
	Problem3_03();
	Problem3_04();
	Problem3_05();
	Problem3_06();
}