#include <stdio.h>

void Problem3_01(){
	double num1, num2, num3;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num1);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num2);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num3);
	
	double sum = num1 + num2 + num3;
	double avg = sum / 3;

	printf("���� %lf�̰� ����� %lf�Դϴ�.\n", sum, avg);
}

void Problem3_02() {
	double mile;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);
	
	double meter = 1609.0 * mile;

	printf("%lf������ %lf�����Դϴ�.\n", mile, meter);

}

void Problem3_03() {
	double height, base;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &height);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &base);
	
	double area = height * base * 0.5;
	
	printf("�ﰢ���� ����: %lf\n", area);
}

void Problem3_04() {
	double f;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &f);

	double c = (5.0 / 9.0) * (f - 32.0);

	printf("�������� %lf���Դϴ�.\n", c);
}

void Problem3_05() {
	double x;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &x);

	double y = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %lf\n", y);
}

void Problem3_06() {
	double weight_on_earth;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %lfKG�Դϴ�.\n", weight_on_moon);
}

void Exercise_Chap3() {
	Problem3_01();
	Problem3_02();
	Problem3_03();
	Problem3_04();
	Problem3_05();
	Problem3_06();
}