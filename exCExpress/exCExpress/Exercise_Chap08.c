#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.141592
#define E 0.000001

int Get_input_Int(char* string)
{
	int n;

	printf("%s", string);
	scanf("%d", &n);
	getchar();

	return n;
}
char Get_input_Char(char* string)
{
	char n;

	printf("%s", string);
	scanf("%c", &n);
	getchar();

	return n;
}
double Get_input_Double(char* string)
{
	double n;

	printf("%s", string);
	scanf("%lf", &n);
	getchar();

	return n;
}
double square(double n)
{
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", n, n * n);
}
void check_alpha(char c)
{
	if (c > 0x61 && c < 0x7A)
		printf("%c�� ���ĺ� �����Դϴ�.",c);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", c);
}
void cal_area(double radius)
{
	printf("���� ������ %lf�Դϴ�.\n", (PI * radius * radius));
}
void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		printf("%d���� 366���Դϴ�.", year);
	else if (year % 400 == 0)
		printf("%d���� 366���Դϴ�.", year);
	else
		printf("%d���� 365���Դϴ�.", year);
}
void p5_round(double f)
{
	printf("�ݿø��� ���� %d�Դϴ�.", (int)(f + 0.5));
}
int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}
int absolute(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}
int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}
void get_tax(int income)
{
	printf("�ҵ漼�� %d�Դϴ�\n", income > 1000 ? (int)(((income - 1000) * 0.1) + 80) : (int)(income * 0.08));	
}
void sin_degree(double degree)
{
	printf("sin(%lf)�� ���� %lf\n", degree, sin((PI * degree) / 180.0));
}
int b_rand()
{
	printf("%d ", rand() % 2);
	return rand() % 2;
}
void f_rand()
{
	printf("%lf ", rand() / (double)RAND_MAX);
}
void print_value(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
}
int is_multiple(int n, int m)
{
	if (n % m == 0)
	{
		return 1;
	}
	else
		return 0;
}
double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
void is_Prime()
{
	int i, j, p = 0;
	for (i = 2; i <= 100; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				p++;
		}
		if (p == 2)
			printf("%d ", i);
		p = 0;
	}
}
int factorial(int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}
double f_abs(double a)
{	
	if (a >= 0)
		return a;
	else
		return -a;
}
double f_min(double a, double b)
{
	if (a > b)
		return b;
	else
		return a;
}
void f_equal(double a, double b)
{
	if (f_abs(a - b) / f_min(f_abs(a), f_abs(b)) < E)
		printf("�� ���� �Ǽ��� ���� ����\n");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�\n");
}
void f_prompt()
{
	printf("==========================\n");
	printf("MENU\n");
	printf("==========================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}
void Arithmetic(int n1, int n2, int m)
{
	switch (m)
	{
	case 1: 
		printf("������: %d\n", n1 + n2);
		break;
	case 2:	
		printf("������: %d\n", n1 - n2);
		break;
	case 3: 
		printf("������: %d\n", n1 * n2);
		break;
	case 4: 
		printf("������: %lf\n", n1 / (double)n2);
		break;
	case 5: 
		printf("������: %d\n", n1 % n2);
		break;
	}
}

void Problem8_01()
{
	double n = (double)Get_input_Int("������ �Է��Ͻÿ�: ");
	square(n);
}
void Problem8_02()
{
	char c;
	c = Get_input_Char("���ڸ� �Է��Ͻÿ�: ");
	check_alpha(c);
}
void Problem8_03()
{
	double r;
	r = Get_input_Double("���� �������� �Է��Ͻÿ�: ");
	cal_area(r);
}
void Problem8_04()
{
	int year;
	year = Get_input_Int("������ �Է��Ͻÿ�: ");
	is_leap(year);
}
void Problem8_05()
{
	double f;
	f = Get_input_Double("�Ǽ��� �Է��Ͻÿ�: ");
	p5_round(f);
}
void Problem8_06()
{
	int n,result;
	n = Get_input_Int("������ �Է��Ͻÿ�: ");
	printf("even()�� ��� : %s\n",even(n)==1 ? "¦��" : "Ȧ��");
	printf("absolute()�� ��� : %d\n", absolute(n));
	result = sign(n);
	printf("sign()�� ��� : %s\n", result > 0 ? "���" : result == 0 ? "0" : "����");
}
void Problem8_07()
{
	int income;
	income = Get_input_Int("�ҵ��� �Է��Ͻÿ�(����): ");
	get_tax(income);
}
void Problem8_08()
{
	double degree;
	degree = Get_input_Double("sin���� �Է��Ͻÿ�: ");
	sin_degree(degree);
}
void Problem8_09()
{
	int i;

	srand(time(NULL));

	for(i=0;i<5;i++)
		b_rand();
	printf("\n");
}
void Problem8_10()
{
	int coin;

	srand(time(NULL));

	while(1)
	{
		coin = Get_input_Int("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		if (b_rand() == coin)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		if (Get_input_Char("����Ͻðڽ��ϱ�?(y �Ǵ� n): ") == 'y')
			break;
	}
	
}
void Problem8_11()
{
	srand(time(NULL));
	f_rand();
	f_rand();
	f_rand();
	f_rand();
	f_rand();
	printf("\n");
}
void Problem8_12()
{
	int value;
	
	while (1)
	{
		value = Get_input_Int("���� �Է��Ͻÿ�(����� ����): ");
		if (value < 0)
			break;
		print_value(value);
	}
	
}
void Problem8_13()
{
	int n, m;

	n = Get_input_Int("ù��° ������ �Է��Ͻÿ�: ");
	m = Get_input_Int("�ι�° ������ �Է��Ͻÿ�: ");
	
	if (is_multiple(n, m))
		printf("%d�� %d�� ����Դϴ�.\n", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);

}
void Problem8_14()
{
	double x1, y1, x2, y2;

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�: (x,y) ");
	scanf("%lf %lf", &x1, &y1);
	getchar();
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�: (x,y) ");
	scanf("%lf %lf", &x2, &y2);
	getchar();

	printf("���� ������ �Ÿ��� %lf�Դϴ�.", get_distance(x1, y1, x2, y2));
}
void Problem8_15()
{
	is_Prime();
}
void Problem8_16()
{
	int n, i;
	double e = 1.0;

	n = Get_input_Int("������ ����ұ��: ");

	for (i = 1; i <= n; i++)
		e += (1 / (double)factorial(i));

	printf("���Ϸ��� ���� %lf�Դϴ�.\n", e);
}
void Problem8_17()
{
	double a, b;
	
	a = Get_input_Double("�Ǽ��� �Է��Ͻÿ�: ");
	b = Get_input_Double("�Ǽ��� �Է��Ͻÿ�: ");

	f_equal(a, b);

}
void Problem8_18()
{
	char con;
	int m,n1,n2;

	while (1)
	{
		f_prompt();
		m = Get_input_Int("���ϴ� �޴��� �����Ͻÿ�(1~5): ");
		if (m < 1 || m>5)
			continue;

		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf("%d %d", &n1, &n2);
		getchar();

		Arithmetic(n1, n2, m);

		printf("����Ϸ��� y�� �����ÿ�:");
		scanf("%c", &con);
		getchar();
		if (con != 'y')
			break;
	}
	
}

void Exercise_Chap8()
{
	Problem8_18();
}