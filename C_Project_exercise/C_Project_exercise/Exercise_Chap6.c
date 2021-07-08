#include <stdio.h>

void Problem6_01()
{
	char a;

	printf("문자를 입력하시오:");
	scanf("%c", &a);
	
	switch (a)
	{
	case 0x61:
		printf("모음입니다.\n");
		break;
	case 0x65:
		printf("모음입니다.\n");
		break;
	case 0x69:
		printf("모음입니다.\n");
		break;
	case 0x6f:
		printf("모음입니다.\n");
		break;
	case 0x75:
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;
	}
}
void Problem6_02()
{
	int num1, num2;

	printf("정수를 입력하시오:");
	scanf("%d", &num1);
	getchar();
	printf("정수를 입력하시오:");
	scanf("%d", &num2);
	getchar();

	if (num1 % num2 == 0)
	{
		printf("약수입니다\n");
	}
	else
	{
		printf("약수가 아닙니다\n");
	}
}
void Problem6_03()
{
	int n1, n2, n3, result;

	printf("3개의 정수를 입력하시오:");
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

	printf("제일 작은 정수는 %d입니다.\n", result);
}
void Problem6_04()
{
	int p_rps, c_rps, result;

	printf("선택하시오(1: 가위 2: 바위 3: 보) : ");
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

	printf("컴퓨터의 선택 : %s\n", c_rps == 1 ? "가위" : (c_rps == 2 ? "바위" : "보"));
	if (result == 1)
		printf("무승부\n");
	else if (result == 2)
		printf("사용자가 이겼음\n");
	else
		printf("컴퓨터가 이겼음\n");
}
void Problem6_05()
{
	int height, age;
	printf("키를 입력하시오(cm): ");
	scanf("%d", &height);
	getchar();
	printf("나이를 입력하시오: ");
	scanf("%d", &age);
	getchar();

	if (height >= 140 && age >= 10)
		printf("타도 좋습니다\n");
	else
		printf("죄송합니다\n");
}
void Problem6_06()
{
	int mon;

	printf("월번호를 입력하시오: ");
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
	printf("체중과 키를 입력하세요: ");
	scanf("%lf %lf", &kg, &cm);

	avg = (cm - 100) * 0.9;

	if (kg == avg)
		printf("표준체중 입니다\n");
	else if (kg > avg)
		printf("과체중 입니다\n");
	else
		printf("저체중 입니다\n");
}
void Problem6_08()
{
	int time, age;
	
	printf("현재 시간과 나이를 입력하시오(시간, 나이):");
	scanf("%d %d", &time, &age);

	if (time < 17)
		if (age >= 65 || (age <= 12 && age >= 3))
			printf("요금은 25000입니다");
		else
			printf("요금은 34000입니다");
	else
		printf("요금은 10000입니다");

}
void Problem6_09()
{
	double x;
	printf("x의 값을 입력하시오:");
	scanf("%lf", &x);

	if (x > 0)
		printf("f(x)의 값은 %lf", 7 * x + 2);
	else
		printf("f(x)의 값은 %lf", x * x - 9 * x + 2);

}
void Problem6_10()
{
	int x, y;

	printf("좌표(x y): ");
	scanf("%d %d", &x, &y);

	if (y > 0)
		if (x > 0)
			printf("1사분면\n");
		else
			printf("2사분면\n");
	else
		if(x>0)
			printf("4사분면\n");
		else
			printf("3사분면\n");
}
void Problem6_11()
{
	char c;
	printf("문자를 입력하시오:");
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