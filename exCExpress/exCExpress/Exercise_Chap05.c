#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void Problem5_01() {
	int num1, num2;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);

	printf("��: %d ������: %d\n", num1 / num2, num1 % num2);
}
void Problem5_02() {
	double num1, num2;
	
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf %lf", &num1, &num2);

	printf("%lf %lf %lf %lf\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

}
void Problem5_03() {
	int num1, num2, num3;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("�ִ밪:%d\n", (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3));

}
void Problem5_04() {
	int cm, feet;
	double inch;
	
	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf("%d", &cm);

	inch = cm / 2.54;
	feet = inch / 12;
	

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�", cm, feet, inch-((double)feet*12));
}
void Problem5_05() {
	int num;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	printf("���� �ڸ�: %d\n",num/10);
	printf("���� �ڸ�: %d\n",num%10);

}
void Problem5_06() {
	int num;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	printf("2�� ����: %d\n", ~num + 1);
}
void Problem5_07() {
	int num, shift;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);
	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d", &shift);

	printf("%d<<%d�� ��: %d\n", num, shift, num << shift);
}
void Problem5_08() {
	double radian;
	
	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &radian);
	
	printf("ǥ������ %lf�Դϴ�\n", 4*PI* pow(radian, 2));
	printf("ü���� %lf�Դϴ�\n", (double)4/3*PI*pow(radian,3));

}
void Problem5_09() {
	double ac, ae, bc;

	printf("�������� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &bc);

	printf("������ �׸����� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &ac);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�:");
	scanf("%lf", &ae);

	printf("�Ƕ�̵��� ���̴� %lf �Դϴ�", ae*bc/ac);
}
void Problem5_10() {
	int x, y;

	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	printf("%d��и�\n", x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3));
}
void Problem5_11() {
	double km, degree;

	printf("�Ÿ��� �Է��Ͻÿ�:");
	scanf("%lf", &km);
	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &degree);

	printf("������ �������� %lf", (360/degree*km)/(2*PI));
}
void Problem5_12() {
	unsigned int a = 0, temp = 0;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &temp);
	getchar();
	a |= temp;
	temp = 0;
	
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 8;
	a |= temp;
	temp = 0;
	
	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 16;
	a |= temp;
	temp = 0;

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &temp);
	getchar();
	temp <<= 24;
	a |= temp;

	printf("�����: %x\n",a);
}

void Exercise_Chap5() {
	Problem5_12();
}