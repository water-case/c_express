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
	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", n, n * n);
}
void check_alpha(char c)
{
	if (c > 0x61 && c < 0x7A)
		printf("%c는 알파벳 문자입니다.",c);
	else
		printf("%c는 알파벳 문자가 아닙니다.", c);
}
void cal_area(double radius)
{
	printf("원의 면적은 %lf입니다.\n", (PI * radius * radius));
}
void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		printf("%d년은 366일입니다.", year);
	else if (year % 400 == 0)
		printf("%d년은 366일입니다.", year);
	else
		printf("%d년은 365일입니다.", year);
}
void p5_round(double f)
{
	printf("반올림한 값은 %d입니다.", (int)(f + 0.5));
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
	printf("소득세는 %d입니다\n", income > 1000 ? (int)(((income - 1000) * 0.1) + 80) : (int)(income * 0.08));	
}
void sin_degree(double degree)
{
	printf("sin(%lf)의 값은 %lf\n", degree, sin((PI * degree) / 180.0));
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
		printf("두 개의 실수는 서로 같음\n");
	else
		printf("두 개의 실수는 서로 다름\n");
}
void f_prompt()
{
	printf("==========================\n");
	printf("MENU\n");
	printf("==========================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}
void Arithmetic(int n1, int n2, int m)
{
	switch (m)
	{
	case 1: 
		printf("연산결과: %d\n", n1 + n2);
		break;
	case 2:	
		printf("연산결과: %d\n", n1 - n2);
		break;
	case 3: 
		printf("연산결과: %d\n", n1 * n2);
		break;
	case 4: 
		printf("연산결과: %lf\n", n1 / (double)n2);
		break;
	case 5: 
		printf("연산결과: %d\n", n1 % n2);
		break;
	}
}

void Problem8_01()
{
	double n = (double)Get_input_Int("정수를 입력하시오: ");
	square(n);
}
void Problem8_02()
{
	char c;
	c = Get_input_Char("문자를 입력하시오: ");
	check_alpha(c);
}
void Problem8_03()
{
	double r;
	r = Get_input_Double("원의 반지름을 입력하시오: ");
	cal_area(r);
}
void Problem8_04()
{
	int year;
	year = Get_input_Int("연도를 입력하시오: ");
	is_leap(year);
}
void Problem8_05()
{
	double f;
	f = Get_input_Double("실수를 입력하시오: ");
	p5_round(f);
}
void Problem8_06()
{
	int n,result;
	n = Get_input_Int("정수를 입력하시오: ");
	printf("even()의 결과 : %s\n",even(n)==1 ? "짝수" : "홀수");
	printf("absolute()의 결과 : %d\n", absolute(n));
	result = sign(n);
	printf("sign()의 결과 : %s\n", result > 0 ? "양수" : result == 0 ? "0" : "음수");
}
void Problem8_07()
{
	int income;
	income = Get_input_Int("소득을 입력하시오(만원): ");
	get_tax(income);
}
void Problem8_08()
{
	double degree;
	degree = Get_input_Double("sin값을 입력하시오: ");
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
		coin = Get_input_Int("앞면 또는 뒷면(1 또는 0): ");
		if (b_rand() == coin)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
		if (Get_input_Char("계속하시겠습니까?(y 또는 n): ") == 'y')
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
		value = Get_input_Int("값을 입력하시오(종료는 음수): ");
		if (value < 0)
			break;
		print_value(value);
	}
	
}
void Problem8_13()
{
	int n, m;

	n = Get_input_Int("첫번째 정수를 입력하시오: ");
	m = Get_input_Int("두번째 정수를 입력하시오: ");
	
	if (is_multiple(n, m))
		printf("%d는 %d의 배수입니다.\n", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", n, m);

}
void Problem8_14()
{
	double x1, y1, x2, y2;

	printf("첫번째 점의 좌표를 입력하시오: (x,y) ");
	scanf("%lf %lf", &x1, &y1);
	getchar();
	printf("두번째 점의 좌표를 입력하시오: (x,y) ");
	scanf("%lf %lf", &x2, &y2);
	getchar();

	printf("두점 사이의 거리는 %lf입니다.", get_distance(x1, y1, x2, y2));
}
void Problem8_15()
{
	is_Prime();
}
void Problem8_16()
{
	int n, i;
	double e = 1.0;

	n = Get_input_Int("어디까지 계산할까요: ");

	for (i = 1; i <= n; i++)
		e += (1 / (double)factorial(i));

	printf("오일러의 수는 %lf입니다.\n", e);
}
void Problem8_17()
{
	double a, b;
	
	a = Get_input_Double("실수를 입력하시오: ");
	b = Get_input_Double("실수를 입력하시오: ");

	f_equal(a, b);

}
void Problem8_18()
{
	char con;
	int m,n1,n2;

	while (1)
	{
		f_prompt();
		m = Get_input_Int("원하는 메뉴를 선택하시오(1~5): ");
		if (m < 1 || m>5)
			continue;

		printf("숫자 2개를 입력하시오: ");
		scanf("%d %d", &n1, &n2);
		getchar();

		Arithmetic(n1, n2, m);

		printf("계속하려면 y를 누르시오:");
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