#include <stdio.h>
#include <Windows.h>

void draw_rect()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());

	int i;
	for (i = 0; i < 100; i++)
	{
		int x = rand() % 500;
		int y = rand() % 300;
		int w = rand() % 100;
		int h = rand() % 100;
		Rectangle(hdc, x, y, x + w, y + h);
		Sleep(100);
	}
}
void Problem7_01()
{
	int i;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf("%d", &i);

	for ( ; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n\a");

}
void Problem7_02()
{
	int i, sum=0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}

	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);
}
void Problem7_03()
{
	int i,num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	getchar();

	printf("���: ");
	for (i = 1; i <= num; i++)
	{
		if(num%i == 0)
			printf("%d ", i);
	}
}
void Problem7_04()
{
	int i,j;
	
	for (i = 0; i < 7; i++)
	{
		for (j = 6; j > i; j--)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
void Problem7_05()
{
	int num, i, j;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	getchar();

	for (i = 0; i < num; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d ", j + 1);
		printf("\n");
	}

}
void Problem7_06()
{
	char c;
	int n1, n2, condition = 1;
	double d1, d2;

	printf("**************\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("**************\n");

	do
	{
		printf("������ �����Ͻÿ�: ");
		scanf("%c", &c);
		getchar();
		
		switch (c)
		{
		case 'A':
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &n1, &n2);
			getchar();
			printf("%d\n", n1 + n2);
			break;
		case 'S':
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%d %d", &n1, &n2);
			getchar();
			printf("%d\n", n1 - n2);
			break;
		case 'M':
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%lf %lf", &d1, &d2);
			getchar();
			printf("%lf\n", d1 * d2);
			break;
		case 'D':
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
			scanf("%lf %lf", &d1, &d2);
			getchar();
			printf("%lf\n", d1 / d2);
			break;
		case 'Q':
			condition = 0;
			break;
		default:
			break;
			
		}

	} while (condition == 1);
}
void Problem7_07()
{
	int i, j, n=0;

	for (i = 2; i <= 100; i++)
	{
		for (j = 1; j <= i; j++)
			if (i % j == 0)
				n++;

		if (n==2)
			printf("%d %d\n", i,n);
		n = 0;
	}
}
void Problem7_08()
{
	int n, i;

	while (1)
	{
		printf("������ ����(����: -1): ");
		scanf("%d", &n);
		getchar();

		if (n == -1)
			break;

		for (i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void Problem7_09()
{
	int n = 1, sum = 0;

	while (1)
	{
		sum += n;
		
		if (sum > 10000)
		{
			printf("1���� %d������ ���� %d�Դϴ�.\n", n-1, sum - n);
			break;
		}
		n++;
	}
}
void Problem7_10()
{
	double n, result = 1.0;
	int s, i;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &n);
	getchar();
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &s);
	getchar();

	for (i = 0; i < s; i++)
	{
		result *= n;
	}
	printf("������� %lf\n", result);
}
void Problem7_11()
{
	int n, i, result = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	getchar();

	for (i = 1; i <= n; i++)
	{
		result += i * i;
	}
	printf("��갪�� %d�Դϴ�.", result);
}
void Problem7_12()
{
	int i,n,n1,n2,n3;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &n);
	getchar();

	n1 = 0;
	printf("%d ", n1);
	n2 = 1;
	printf("%d ", n2);

	for (i = 0; i < n-1; i++)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
	
}
void Problem7_13()
{
	int i, n, r, result = 1;

	printf("n�� ��: ");
	scanf("%d", &n);
	getchar();
	printf("r�� ��: ");
	scanf("%d", &r);
	getchar();
	for (i = 0; i <= (r - 1); i++)
		result *= n - i;

	printf("������ ���� %d�Դϴ�\n", result);
}
void Problem7_14()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	getchar();
	
	do
	{
		if (n > 10)
		{
			printf("%d", n % 10);
			n /= 10;
		}
		else
		{
			printf("%d\n", n % 10);
			break;
		}
	} while (1);
}
void Exercise_Chap7()
{
	Problem7_14();
}