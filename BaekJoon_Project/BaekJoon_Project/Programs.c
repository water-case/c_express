#include "JTH.h"

// 백준 단계별로 풀어보기
// 1단계 입출력과 사칙연산
void problem1008() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%.9lf", a / (double)b);
}
void problem10869() {
	int a, b;
	
	scanf("%d %d", &a, & b);

	printf("%d \n%d \n%d \n%d \n%d\n", a + b, a - b, a * b, a / b, a % b);
}
void problem10430() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);
}
void problem2588() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", a*(b%10));
	printf("%d\n", a*(int)((b%100)/10));
	printf("%d\n", a*(int)(b/100));
	printf("%d\n", a*b);
}

// 2단계 if문
void problem1330() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b)
		printf(">\n");
	else if (a < b)
		printf("<\n");
	else
		printf("==\n");
}
void problem9498() {
	int a;

	scanf("%d", &a);

	if (a <= 100 && a >= 90)
		printf("A");
	else if (a <= 89 && a >= 80)
		printf("B");
	else if (a <= 79 && a >= 70)
		printf("C");
	else if (a <= 69 && a >= 60)
		printf("D");
	else
		printf("F");
}
void problem2753() {
	int a;

	scanf("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0)
				printf("1");
			else
				printf("0");
		}
		else
			printf("1");
	}
	else
		printf("0");
}
void problem14681() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > 0) {
		if (b > 0)
			printf("1");
		else if (b < 0)
			printf("4");
	}
	else if (a < 0) {
		if (b > 0)
			printf("2");
		else if (b < 0)
			printf("3");
	}
}
void problem2884() {
	int h, m;

	scanf("%d %d", &h, &m);

	if (m < 45) {
		if (h == 0) {
			h = 23;
		}
		else {
			h -= 1;
		}
		m = 60 - (45 - m);
	}
	else {
		m -= 45;
	}

	printf("%d %d", h, m);
}

// 3단계 for문
void problem2739() {
	int i;
	int a;

	scanf("%d", &a);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
}
void problem10950() {
	int i;
	int a;

	scanf("%d", &a);

	int n1, n2;
	for (i = 0; i < a; i++) {
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
}
void problem8393() {
	int i;
	int a;

	scanf("%d", &a);

	int sum = 0;

	for (i = 1; i < a+1; i++) {
		sum += i;
	}
	printf("%d", sum);

}
void problem15552() {
	int i;
	int a;

	scanf("%d", &a);

	int n1, n2;
	for (i = 0; i < a; i++) {
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
}
void problem2741() {
	int i;
	int a;

	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		printf("%d\n", i);
	}
}
void problem2742() {
	int i;
	int a;

	scanf("%d", &a);

	for (i = a; i >= 1; i--) {
		printf("%d\n", i);
	}
}
void problem11021() {
	int i;
	int t;

	scanf("%d", &t);

	int a, b;
	for (i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
}
void problem11022() {
	int i;
	int t;

	scanf("%d", &t);

	int a, b;
	for (i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}
void problem2438() {
	int i,j;
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void problem2439() {
	int i, j;
	int n;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		for (j = 1; j < n-i; j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void problem10871() {
	int i;
	int n, x;
	scanf("%d %d", &n, &x);

	int a[10000];

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		if (a[i] < x)
			printf("%d ", a[i]);
	}
}

// 4단계 while문
void problem10952() {
	int a, b;

	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}
}
void problem10951() {
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
}
void problem1110() {
	int n;
	scanf("%d", &n);

	int newN = 0, count = 0;
	int tempN = n;
	while (1) {
		if (tempN < 10) {
			newN = tempN * 10 + tempN;
			count++;
		}
		else {
			newN = ((tempN % 10) * 10) + (((int)(tempN / 10) + (tempN % 10)) % 10);
			count++;
		}
		if (n == newN)
			break;
		else
			tempN = newN;
	}
	printf("%d", count);
}

// 5단계 1차원 배열
void problem10818() {
	int nList[1000000];
	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &nList[i]);
	}

	int max=-1000000, min=1000000;
	for (i = 0; i < n; i++) {
		if (max < nList[i])
			max = nList[i];
		if (min > nList[i])
			min = nList[i];
	}

	printf("%d %d", min, max);

}
void problem2562() {
	int n[9];
	int i;

	for (i = 0; i < sizeof(n) / sizeof(int); i++) {
		scanf("%d", &n[i]);
	}

	int max = 0, count;
	for (i = 0; i < sizeof(n) / sizeof(int); i++) {
		if (max < n[i]) {
			max = n[i];
			count = i;
		}
	}

	printf("%d\n%d", max, count+1);
}
void problem2577() {
	int a, b, c, mul = 0;
	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };

	scanf("%d\n%d\n%d", &a, &b, &c);

	mul = a * b * c;

	while (mul != 0) {
		num[mul % 10] += 1;
		mul = (int)(mul / 10);
	}
	int i;
	for (i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[i]);
	}
}
void problem3052() {
	int num[10];
	int count[42] = { 0, };
	int i;

	for (i = 0; i < 10; i++) 
		scanf("%d", &num[i]);

	for (i = 0; i < 10; i++) {
		count[num[i]%42]++;
	}
	int diff = 0;
	for (i = 0; i < 42; i++) {
		if (count[i] != 0)
			diff++;
	}

	printf("%d", diff);
}
void problem1546() {
	double record[1000];
	int n;
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%lf", &record[i]);

	int m = 0;
	for (i = 0; i < n; i++) {
		if (m < record[i])
			m = record[i];
	}

	for (i = 0; i < n; i++) {
		record[i] = (double)record[i] / m * 100;
		printf("%lf\n", record[i]);
	}

	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += record[i];
	}

	printf("%.2lf", (double)sum / n);
}

void Programs() {
	problem1546();
}