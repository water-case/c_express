#include <stdio.h>

void Problem6_01()
{
	char a;

	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &a);
	
	switch (a)
	{
	case 0x61:
		printf("�����Դϴ�.\n");
		break;
	case 0x65:
		printf("�����Դϴ�.\n");
		break;
	case 0x69:
		printf("�����Դϴ�.\n");
		break;
	case 0x6f:
		printf("�����Դϴ�.\n");
		break;
	case 0x75:
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
		break;
	}
}
void Problem6_02()
{
	int num1, num2;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num1);
	getchar();
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num2);
	getchar();

	if (num1 % num2 == 0)
	{
		printf("����Դϴ�\n");
	}
	else
	{
		printf("����� �ƴմϴ�\n");
	}
}
void Problem6_03()
{
	int n1, n2, n3, result;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2)
		if (n2 > n3)
			result = n3;
		else
			result = n2;
	else
		if (n1 > n3)
			result = n3;
		else
			result = n1;

	printf("���� ���� ������ %d�Դϴ�.\n", result);
}
void Problem6_04()
{
	int p_rps, c_rps, result;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��) : ");
	scanf("%d", &p_rps);

	c_rps = rand() % 3 + 1;

	if (p_rps == c_rps)
		result = 1;
	else if (p_rps > c_rps)
		if (p_rps == 1) 
			result = 0;
		else
			result = 2;
	else
		if (p_rps == 1)
			result = 2;
		else
			result = 0;

	printf("��ǻ���� ���� : %s\n", c_rps == 1 ? "����" : (c_rps == 2 ? "����" : "��"));
	if (result == 1)
		printf("���º�\n");
	else if (result == 2)
		printf("����ڰ� �̰���\n");
	else
		printf("��ǻ�Ͱ� �̰���\n");
}
void Problem6_05()
{
	int height, age;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	getchar();
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);
	getchar();

	if (height >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�\n");
	else
		printf("�˼��մϴ�\n");
}
void Problem6_06()
{
	int mon;

	printf("����ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &mon);
	getchar();

	switch (mon)
	{
	case 1:
		printf("Jan\n");
		break;
	case 2:
		printf("Feb\n");
		break;
	case 3:
		printf("Mar\n");
		break;
	case 4:
		printf("Apr\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("Jun\n");
		break;
	case 7:
		printf("Jul\n");
		break;
	case 8:
		printf("Aug\n");
		break;
	case 9:
		printf("Sep\n");
		break;
	case 10:
		printf("Oct\n");
		break;
	case 11:
		printf("Nov\n");
		break;
	case 12:
		printf("Dec\n");
		break;
	}
}
void Problem6_07()
{
	double kg, cm, avg;
	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%lf %lf", &kg, &cm);

	avg = (cm - 100) * 0.9;

	if (kg == avg)
		printf("ǥ��ü�� �Դϴ�\n");
	else if (kg > avg)
		printf("��ü�� �Դϴ�\n");
	else
		printf("��ü�� �Դϴ�\n");
}
void Problem6_08()
{
	int time, age;
	
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����):");
	scanf("%d %d", &time, &age);

	if (time < 17)
		if (age >= 65 || (age <= 12 && age >= 3))
			printf("����� 25000�Դϴ�");
		else
			printf("����� 34000�Դϴ�");
	else
		printf("����� 10000�Դϴ�");

}
void Problem6_09()
{
	double x;
	printf("x�� ���� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	if (x > 0)
		printf("f(x)�� ���� %lf", 7 * x + 2);
	else
		printf("f(x)�� ���� %lf", x * x - 9 * x + 2);

}
void Problem6_10()
{
	int x, y;

	printf("��ǥ(x y): ");
	scanf("%d %d", &x, &y);

	if (y > 0)
		if (x > 0)
			printf("1��и�\n");
		else
			printf("2��и�\n");
	else
		if(x>0)
			printf("4��и�\n");
		else
			printf("3��и�\n");
}
void Problem6_11()
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &c);
	getchar();

	switch (c)
	{
	case 'r':
	case 'R':
		printf("Rectangle\n");
		break;
	case 't':
	case 'T':
		printf("Triangle\n");
		break;
	case 'c':
	case 'C':
		printf("Circle\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}
void Exercise_Chap6()
{
	Problem6_11();
}