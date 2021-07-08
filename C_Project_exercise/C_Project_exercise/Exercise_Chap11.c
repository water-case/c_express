#include "TH_lib_2.h"

#define SIZE 10

void get_sum_diff(int x, int y, int* sum, int* diff)
{
	
	*sum = x + y;
	*diff = x - y;
}
void array_fill(int* A, int size)
{
	int i;

	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		A[i] = rand();
}
void array_print(int* A, int size) {
	int i;
	
	printf("A[] = { ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", A[i]);
	}
	printf("}\n");
}
void convert(double* grades, double* scores, int size) 
{
	int i;
	for (i = 0; i < size ; i++)
	{
		scores[i] = (grades[i]/4.3) *100;
	}
}
void array_copy2(int* A, int* B, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		B[i] = A[i];
	}
}
void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}

void Problem11_01()
{
	int x = 0x12345678;
	unsigned char* xp = (char*)&x;
	printf("바이트순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);

}
void Problem11_02()
{
	int x = Get_input_Int("첫번째 정수를 입력하세요: ");
	int y = Get_input_Int("두번째 정수를 입력하세요: ");
	int sum, diff;

	get_sum_diff(x, y, &sum, &diff);
	printf("원소들의 합: %d\n", sum);
	printf("원소들의 차: %d\n", diff);
}
void Problem11_03()
{
	int A[SIZE];
	int i;

	array_fill(&A, SIZE);

	for (i = 0; i < SIZE; i++)
		printf("%d\n", A[i]);

}
void Problem11_04(){
	int A[5] = { 1,2,3,4,5 };

	array_print(A, sizeof(A) / sizeof(A[0]));
}
void Problem11_05() 
{
	int i;
	double grades[10] = 
	{
		4.3, 4.0, 3.7, 3.4, 3.1, 
		2.8, 2.5, 2.2, 1.9, 0.1
	};
	double scores[10];

	convert(grades, scores, sizeof(grades) / sizeof(grades[0]));
	
	for (i = 0; i < 10; i++)
		printf("%6.2lf ",grades[i]);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%6.2lf ", scores[i]);
	printf("\n");
}
void Problem11_06()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int B[10];

	array_copy2(A, B, sizeof(A) / sizeof(A[0]));

	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", B[i]);
	printf("\n");
}
void Problem11_07()
{
	int A[10] = { 
		180,190,200,210,220,
		230,240,250,260,270 
	};
	int B[10] = {
		10,20,30,40,50,
		60,70,80,90,100
	};
	int C[10];

	array_add(A, B, C, sizeof(A) / sizeof(A[0]));
	
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\n", C[i]);
}

int array_sum(int* A, int size)
{
	int i, sum = 0;
	
	for (i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
void Problem11_08()
{
	int A[10] = {
		256,254,158,951,453,
		484,565,721,349,582
	};

	printf("월급의 합 = %d\n", array_sum(A,sizeof(A)/sizeof(A[0])));
}

int search(int* A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++)
		if (A[i] == search_value)
			return i;
}
void Problem11_09()
{
	int A[10] = {
		199,200,201,205,800,
		468,589,541,230,154
	};
	
	int index = search(A, sizeof(A) / sizeof(A[0]), 200);

	printf("월급이 200만원인 사람의 인덱스 = %d \n", index);
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int temp;
	int x1 = x;
	int y1 = y;
	while (1)
	{
		if (x1 > y1)
		{
			temp = x1 % y1;
			x1 = y1;
			y1 = temp;
		}
		else
		{
			temp = y1;
			y1 = x1;
			x1 = temp;
		}

		if (y1 == 0)
		{
			*p_gcd = x1;
			break;
		}
	}
	
	*p_lcm = x * y / *p_gcd;
}
void Problem11_10()
{
	int x, y;
	int lcm, gcd;
	
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	getchar();

	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다\n", lcm);
	printf("최대공약수는 %d입니다\n", gcd);
}

void p11_merge(int* A, int* B, int* C, int size)
{
	int i=0,j=0;
	while (i+j < size)
	{
		if (i == 10)
		{
			C[i + j] = B[j];
			j++;
			break;
		}
		if (A[i] < B[j])
		{
			C[i + j] = A[i];
			i++;
		}
		else
		{
			C[i + j] = B[j];
			j++;
		}
	}
}
void Problem11_11()
{
	int A[10] = {
		1,3,5,7,9,
		11,13,15,17,19
	};
	int B[10] = {
		2,4,6,8,10,
		12,14,16,18,20
	};
	int C[20];

	p11_merge(A, B, C, sizeof(A) / sizeof(A[0]) + sizeof(B) / sizeof(B[0]));
	
	int i;
	for (i = 0; i < 20; i++)
		printf("%d\n", C[i]);
}

void Get_input_TwoInt(int* x, int* y)
{
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", x, y);
	getchar();
}
void Problem11_12()
{
	int x, y;

	Get_input_TwoInt(&x, &y);
	printf("정수의 합은 %d\n", x + y);
}

void Exercise_Chap11()
{
	Problem11_12();
};