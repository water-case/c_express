#include <stdio.h>

//실수 두개를 입력받아서 몸무게의 평균치 출력
void Calculation_Weight() {
	double num1 = 0, num2 = 0;

	printf("첫번째 몸무게를 입력하세요 : ");
	scanf("%lf", &num1);
	printf("\n두번째 몸무게를 입력하세요 : ");
	scanf("%lf", &num2);

	printf("\n몸무게의 평균 : %f\n", (double)((num1 + num2) / 2));
}