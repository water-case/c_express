#include <stdio.h>

//�Ǽ� �ΰ��� �Է¹޾Ƽ� �������� ���ġ ���
void Calculation_Weight() {
	double num1 = 0, num2 = 0;

	printf("ù��° �����Ը� �Է��ϼ��� : ");
	scanf("%lf", &num1);
	printf("\n�ι�° �����Ը� �Է��ϼ��� : ");
	scanf("%lf", &num2);

	printf("\n�������� ��� : %f\n", (double)((num1 + num2) / 2));
}