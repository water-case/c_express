#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#include "TH_lib.h"

#define TILEX 30
#define TILEY 25

int array_equal(int a[], int b[], int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
int array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		b[i] = a[i];
}
double Avgdate(int a[])
{
	int sum = 0, i;
	for (i = 0; i < 10; i++)
		sum += a[i];
	return sum / 10;
}
double Stddev(int a[])
{
	int sum = 0, i;
	for (i = 0; i < 10; i++)
		sum += pow(a[i] - Avgdate(a), 2);
	return sqrt(sum / 10);
}
void vector_add(double x[][3])
{
	double sumx = 0, sumy = 0, sumz = 0;

	sumx = x[0][0] + x[1][0];
	sumy = x[0][1] + x[1][1];
	sumz = x[0][2] + x[1][2];

	printf("벡터의 합 = [ %lf, %lf, %lf]\n", sumx, sumy, sumz);
}
void vector_dot_prod(double x[][3])
{
	printf("벡터의 내적 = %lf\n", x[0][0] * x[1][0] + x[0][1] * x[1][1] + x[0][2] * x[1][2]);
}
int GetProductWhere(int num) {
	static int a[10][2] = {
		{1,1},
		{2,1},
		{3,2},
		{4,2},
		{5,3},
		{6,3},
		{7,4},
		{8,4},
		{9,5},
		{10,5}
	};

	printf("%d번 상품의 위치는 %d입니다.\n", num, a[num][1]);
}
void scalar_mult(int a[][3], int scalar)
{
	int i,j;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] *= scalar;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%-2d ", a[i][j]);
		printf("\n");
	}
}
void transpose(int a[][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] *= a[i][j];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%-2d ", a[i][j]);
		printf("\n");
	}
}
void BugPosition(char tile[TILEY][TILEX], char bugxy[2])
{
	int a = rand() % 8;
	

	switch (a)
	{
		case 0:
			bugxy[0]++;
			break;
		case 1:
			bugxy[1]++;
			bugxy[0]++;
			break;
		case 2:
			bugxy[1]++;
			break;
		case 3:
			bugxy[1]++;
			bugxy[0]--;
			break;
		case 4:			
			bugxy[0]--;
			break;
		case 5:
			bugxy[1]--;
			bugxy[0]--;
			break;
		case 6:
			bugxy[1]--;
			break;
		case 7:
			bugxy[1]--;
			bugxy[0]++;
			break;
	}

	tile[bugxy[0]][bugxy[1]] = '*';

}
void Palette(char background[][10], char hero[], char gold[], char monster[][2])
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			background[i][j] = '.';

	background[hero[1]][hero[0]] = '#';
	background[gold[1]][gold[0]] = 'G';
	background[monster[0][1]][monster[0][0]] = 'M';
	background[monster[1][1]][monster[1][0]] = 'M';

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%c", background[i][j]);
		}
		printf("\n");
	}
}
void Move(char hero[], char gold[], char monster[][2])
{
	int i, j;

	
	switch (_getch())
	{
		case 72:
			hero[1]--;
			break;
		case 77:
			hero[0]++;
			break;
		case 80 :
			hero[1]++;
			break;
		case 75:
			hero[0]--;
			break;
	}
	
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			monster[i][j] += (rand() % 3) - 1;
	
}

void Problem10_01()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < 12; i++)
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
}
void Problem10_02()
{
	int i, x[10], min, max;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		x[i] = rand();
		printf("%d\n", x[i]);
	}
		

	min = x[0];
	max = x[0];

	for (i = 0; i < 10; i++)
	{
		if (x[i] > max)
			max = x[i];
		if (x[i] < min)
		{
			min = x[i];
		}
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);
}
void Problem10_03()
{
	int a[5] = { 0,1,2,3,1 };
	int b[5] = { 0,1,2,3,4 };

	if (array_equal(a, b, sizeof(a)/sizeof(int)))
		printf("2개의 배열은 같음\n");
	else
		printf("2개의 배열은 다름\n");
}
void Problem10_04()
{
	int a[5] = { 0,1,2,3,4 }, b[5], i;

	array_copy(a, b, sizeof(a) / sizeof(int));

	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");
}
void Problem10_05()
{
	int result[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int printnum=0;

	srand(time(NULL));

	int i;
	for (i = 0; i < 100; i++)
		result[rand() % 10]++;

	for (i = 0; i < 10; i++)
		if (result[printnum] < result[i + 1])
			printnum = i+1;
	for (i = 0; i < 10; i++)
		printf("%d = %d\n", i, result[i]);
	printf("가장 많이 나온 수 = %d\n", printnum);
}
void Problem10_06()
{
	int a[3][5] = { { 12,56,32,16,98 },{99,56,34,41,3},{65,3,87,78,21} };

	int i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum += a[i][j];
		}
		printf("%d행의 합계: %d\n", i, sum);
		sum = 0;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += a[j][i];
		}
		printf("%d열의합계: %d\n", i, sum);
		sum = 0;
	}
}
void Problem10_07()
{
	int a[10][3];

	int i;
	for (i = 0; i < 10; i++)
		a[i][0] = i + 1;
	for (i = 0; i < 10; i++)
		a[i][1] = pow(a[i][0], 2);
	for (i = 0; i < 10; i++)
		a[i][2] = pow(a[i][0], 3);

	int n = Get_input_Int("정수를 입력하시오: ");
	int result=0;
	for (i = 0; i < 10; i++)
		if (a[i][2] == n)
		{
			result = i;
			break;
		}
	printf("%d의 세제곱근은 %d\n", n, a[result][0]);
}
void Problem10_08()
{
	int num[10];
	
	int i;
	for (i = 0; i < 10; i++)
		num[i] = Get_input_Int("데이터를 입력하시오: ");

	printf("평균값은 %lf\n", Avgdate(num));
	printf("표준편차값은 %lf\n", Stddev(num));
}
void Problem10_09()
{
	int score[10][3];

	srand(time(NULL));

	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++)
			score[i][j] = rand() % 101;

	int max = 0, min = 100;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (score[j][i] > max)
				max = score[j][i];
			if (score[j][i] < min)
				min = score[j][i];
		}
		printf("시험 #%d의 최대점수 = %d\n", i, max);
		printf("시험 #%d의 최저점수 = %d\n", i, min);
		max = 0;
		min = 100;
	}
}
void Problem10_10_a()
{
	double x[2][3] = { {1,2,3},{2,3,4} };
	vector_add(x);

}
void Problem10_10_b()
{
	double x[2][3] = { {1,2,3},{2,3,4} };
	vector_dot_prod(x);

}
void Problem10_11()
{
	int num = Get_input_Int("상품 번호를 입력하시오: ");
	GetProductWhere(num);
}
void Problem10_12()
{
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//scalar_mult(a, 2);
	transpose(a);

}
void Problem10_13()
{
	int i, j, n, binary[32];

	int score = Get_input_Int("숫자를 입력하세요: ");
	n = score;

	for (i = 0; i < 32; i++)
	{
		binary[i] = n % 2;
		n /= 2;
	}

	printf("%d ->", score);

	for (i = 31; i >= 0; i--)
	{
		if (binary[i] != 0)
		{
			for (j = i; j >= 0; j--)
			{
				printf("%d", binary[j]);
			}
			printf("\n");
			break;
		}
	}

}
void Problem10_14()
{
	char tile[TILEY][TILEX];
	int i,j;
	char bugxy[2];
	
	bugxy[1] = rand() % TILEX;
	bugxy[0] = rand() % TILEY;

	srand(time(NULL));

	for (i = 0; i < TILEY; i++)
		for (j = 0; j < TILEX; j++)
			tile[i][j] = '.';

	tile[bugxy[0]][bugxy[1]] = '*';

	while (1)
	{
		for (i = 0; i < TILEY; i++)
		{
			for (j = 0; j < TILEX; j++)
				printf("%c", tile[i][j]);
			printf("\n");
		}
		BugPosition(tile, bugxy);
		_sleep(100);
		system("cls");
	}

}
void Problem10_15()
{
	char position[10][10];
	int i,j;

	srand(time(NULL));
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			position[i][j] = rand() % 100;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if(position[i][j] > 30)
				position[i][j] = '.';
			else
				position[i][j] = '#';
		
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			printf("%c", position[i][j]);
		printf("\n");
	}
		

}
void Problem10_16()
{
	char background[10][10];
	char hero[2],gold[2],monster[2][2];
	int i, j;

	srand(time(NULL));

	for (i = 0; i < 2; i++)
	{
		hero[i] = rand() % 10;
		gold[i] = rand() % 10;
		for (j = 0; j < 2; j++)
			monster[i][j] = rand() % 10;
	}



	while (1)
	{
		Palette(background, hero, gold, monster);
		if (_getch())
			Move(hero, gold, monster);
		system("cls");
		_sleep(10);
			
		//break;
	}

}

void Exercise_Chap10()
{
	Problem10_16();
}