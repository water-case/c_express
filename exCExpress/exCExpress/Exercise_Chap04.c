#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

void Problem4_01() {
	double num;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &num);

	printf("�Ǽ��������δ� %lf�Դϴ�\n", num);
	printf("�����������δ� %e�Դϴ�\n", num);
}

void Problem4_02() {
	int num;

	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf("%x", &num);

	printf("8�����δ� %#x�Դϴ�\n", num);
	printf("10�����δ� %d�Դϴ�\n", num);
	printf("16�����δ� %#X�Դϴ�\n", num);
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

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf("%lf %lf %lf", &w, &h, &d);

	printf("������ ���Ǵ� %lf�Դϴ�.\n", w * h * d);
}

void Problem4_05() {
	double num;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &num);

	printf("%lf�������Դϴ�.\n", num * SQMETER_PER_PYEONG);

}

void Problem4_06() {
	double num1 = 3.32e-3, num2 = 9.76e-8;

	printf("%lf\n", num1 + num2);
}

void Problem4_07() {
	double m, v, e;

	printf("����(kg): ");
	scanf("%lf", &m);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);
	printf("�������(J): %lf\n", m * v * v * 0.5);
}

void Problem4_08() {
	int num;
	
	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("����:%c�Դϴ�.", num);

}

void Problem4_09() {
	printf("%c %c %c\n", 'a' + 1, 'a' + 2, 'a' + 3);
}

void Problem4_10() {
	printf("\aȭ�簡 �߻��Ͽ����ϴ�.\n");
}

void Problem4_11() {
	printf("\"ASCII code\", 'A', 'B', 'C'\n\\t \\a \\n\n");

}

void Exercise_Chap4() {
	Problem4_11();
}