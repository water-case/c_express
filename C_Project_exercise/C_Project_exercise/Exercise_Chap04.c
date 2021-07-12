#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

void Problem4_01() {
	double num;
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &num);

	printf("실수형식으로는 %lf입니다\n", num);
	printf("지수형식으로는 %e입니다\n", num);
}

void Problem4_02() {
	int num;

	printf("16진수 정수를 입력하시오 : ");
	scanf("%x", &num);

	printf("8진수로는 %#x입니다\n", num);
	printf("10진수로는 %d입니다\n", num);
	printf("16진수로는 %#X입니다\n", num);
}

void Problem4_03() {
	int num1 = 10, num2 = 20, temp;
	
	printf("x=%d y=%d\n", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("x=%d y=%d\n", num1, num2);

}

void Problem4_04() {
	double w, h, d;

	printf("상자의 가로 세로 높이를 한번에 입력 : ");
	scanf("%lf %lf %lf", &w, &h, &d);

	printf("상자의 부피는 %lf입니다.\n", w * h * d);
}

void Problem4_05() {
	double num;

	printf("평을 입력하세요: ");
	scanf("%lf", &num);

	printf("%lf평방미터입니다.\n", num * SQMETER_PER_PYEONG);

}

void Problem4_06() {
	double num1 = 3.32e-3, num2 = 9.76e-8;

	printf("%lf\n", num1 + num2);
}

void Problem4_07() {
	double m, v, e;

	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);
	printf("운동에너지(J): %lf\n", m * v * v * 0.5);
}

void Problem4_08() {
	int num;
	
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &num);
	printf("문자:%c입니다.", num);

}

void Problem4_09() {
	printf("%c %c %c\n", 'a' + 1, 'a' + 2, 'a' + 3);
}

void Problem4_10() {
	printf("\a화재가 발생하였습니다.\n");
}

void Problem4_11() {
	printf("\"ASCII code\", 'A', 'B', 'C'\n\\t \\a \\n\n");

}

void Exercise_Chap4() {
	Problem4_11();
}