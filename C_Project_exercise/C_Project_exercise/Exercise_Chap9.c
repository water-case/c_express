#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TH_lib.h"

void A_Sum(int n1, int n2)
{
	static int count_sum;
	count_sum++;

	printf("덧셈은 총 %d번 실행되었습니다.\n", count_sum);
	printf("연산 결과: %d\n", n1 + n2);

}
void A_Min(int n1, int n2)
{
	static int count_min;
	count_min++;

	printf("뺄셈은 총 %d번 실행되었습니다.\n", count_min);
	printf("연산 결과: %d\n", n1 - n2);
}
void A_Mul(int n1, int n2)
{
	static int count_mul;
	count_mul++;

	printf("곱셈은 총 %d번 실행되었습니다.\n", count_mul);
	printf("연산 결과: %d\n", n1 * n2);
}
void A_Div(int n1, int n2)
{
	static int count_div;
	count_div++;

	printf("나눗셈은 총 %d번 실행되었습니다.\n", count_div);
	printf("연산 결과: %lf\n", n1 / (double)n2);
}
void Get_input_Arith(char* string)
{
	int n1 = 0, n2 = 0;
	char a = 0;

	printf("%s", string);
	scanf("%d%c%d", &n1, &a, &n2);
	getchar();

	switch (a)
	{
	case '+':
		A_Sum(n1, n2);
		break;
	case '-':
		A_Min(n1, n2);
		break;
	case '*':
		A_Mul(n1, n2);
		break;
	case '/':
		A_Div(n1, n2);
		break;
	}
}
int get_dice_face()
{
	static int r_num, num1, num2, num3, num4, num5, num6, total = 0;

	r_num = (rand() % 6) + 1;

	switch (r_num)
	{
	case 1:
		num1++;
		break;
	case 2:
		num2++;
		break;
	case 3:
		num3++;
		break;
	case 4:
		num4++;
		break;
	case 5:
		num5++;
		break;
	case 6:
		num6++;
		break;
	}
	total++;

	if (total >= 100)
	{
		printf("1->%d\n", num1);
		printf("2->%d\n", num2);
		printf("3->%d\n", num3);
		printf("4->%d\n", num4);
		printf("5->%d\n", num5);
		printf("6->%d\n", num6);
		return 1;
	}
	else
		return 0;
}
int check(int pass)
{
	static errnum = 0;
	int Tpass = 1234;

	if (Tpass != pass)
		errnum++;
	else
		errnum = 0;

	if (errnum > 2)
		return 1;
	else
		return 0;
}
void get_random()
{
	static int inited = 0;
	if (inited == 0)
	{
		inited = 1;
		srand(time(NULL));
		printf("초기화 실행\n");
	}
	else
		printf("%d\n", rand());

}
int Re_sum(int n)
{
	if (n == 1)
		return 1;
	return n + Re_sum(n - 1);
}
int power(int base, int raised)
{
	if (raised == 0)
		return 1;
	return base * power(base, raised - 1);
}
void show_digit(int x) {


	if (x <= 0)
		return 0;
	show_digit(x / 10);
	printf("%d ", x % 10);
	
}
int Cal_digit(int num)
{
	static cal_num = 0;

	if (num < 10)
	{
		cal_num++;
		return 0;
	}
	cal_num++;
	Cal_digit(num / 10);
	return cal_num;
}
int get_digit_sum(int num)
{
	static int sum_num = 0;

	if (num <= 0)
		return 0;

	sum_num += num % 10;
	get_digit_sum(num / 10);

	return sum_num;
}
double recursive(int n)
{
	static double sum = 0;
	if (n == 1)
	{
		sum += 1;
		return 0;
	}
	
	sum += 1 / (double)n;
	recursive(n - 1);
	return sum;
}
int recursive_11(int n, int k)
{
	static int sum = 0;

	if (k == 0 || k == n)
	{
		sum += 1;
		return 0;
	}
		
	if (k > 0 || k < n)
	{
		recursive_11(n - 1, k - 1) + recursive_11(n - 1, k);
	}
	return sum;

}
int fibo(int n)
{

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return fibo(n - 2) + fibo(n - 1);

}

void Problem9_01()
{	//사칙연산을 지원하는 계산기 프로그램, 각 연산들의 횟수를 기억하고 출력

	while (1)
	{
		Get_input_Arith("연산을 입력하시오: ");
	}


}
void Problem9_02()
{
	int i=0;

	srand(time(NULL));
	while (i==0)
	{
		i = get_dice_face();
	}

}
void Problem9_03()
{
	int n = 0, pass;

	while (n < 3)
	{
		pass = Get_input_Int("비밀번호: ");
		if (check(pass))
		{
			printf("로그인 시도횟수 초과\n");
			break;
		}
	}
}
void Problem9_04()
{
	int i;
	for (i = 0; i < 4; i++)
		get_random();
}
void Problem9_05()
{
	int num = Get_input_Int("정수를 입력하시오: ");
	int result = Re_sum(num);
	printf("1부터 %d까지의 합=%d\n", num, result);
}
void Problem9_06()
{
	int base, raised;

	base = Get_input_Int("밑수: ");
	raised = Get_input_Int("지수: ");

	printf("%d^%d = %d\n", base, raised, power(base, raised));
}
void Problem9_07()
{
	int x;

	x = Get_input_Int("정수를 입력하시오: ");
	show_digit(x);
}
void Problem9_08()
{
	int num = Get_input_Int("정수를 입력하시오: ");
	printf("자리수의 개수: %d\n", Cal_digit(num));
}
void Problem9_09()
{
	int num = Get_input_Int("정수를 입력하시오: ");
	printf("자리수의 합: %d\n", get_digit_sum(num));
}
void Problem9_10()
{
	int n = Get_input_Int("정수를 입력하시오: ");
	printf("%lf\n", recursive(n));
}
void Problem9_11()
{
	int n = Get_input_Int("n=");
	int k = Get_input_Int("k=");
	printf("%d\n",recursive_11(n, k));
}
void Problem9_12()
{
	int i;
	int n = Get_input_Int("n=");
	
	for (i = 0; i < n; i++)
		printf("fib(%d) = %d\n", i, fibo(i));
}

void Exercise_Chap9()
{
	Problem9_12();
}