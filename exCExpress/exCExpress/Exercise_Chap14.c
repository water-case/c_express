#include "TH_lib_2.h"
#define WIDTH 20
#define HEIGHT 20


void set_proverb(char** s, int n) {
	static char* verb[10] = {
		"1a",
		"2a",
		"3a",
		"4a",
		"5a",
		"6a",
		"7a",
		"8a",
		"9a",
		"10a"
	};
	*s = verb[n];
}
void Problem14_01() {
	int n;
	printf("몇번째 속담을 선택하시겠습니까? : ");
	scanf("%d", &n);
	char* s = NULL;
	set_proverb(&s, n);
	printf("%s\n", s);
}

int get_sum(int array[], int size) {
	int i;
	int sum = 0;
	for (i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
}
void Problem14_02() {
	int arr[4][6] = {
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};
	int i;
	int sum=0;
	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		sum += get_sum(arr[i], sizeof(arr[0]) / sizeof(int));
	}
	printf("정수의 합 = %d\n", sum);
}

double get_average(int list[], int n) {
	int sum = 0, i;
	for (i = 0; i < n; i++) {
		sum += list[i];
	}
	return sum / n;
}
void Problem14_03() {
	int score[3][3] = {
		{98,96,99},
		{88,84,81},
		{75,77,74}
	};
	int i;
	for (i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		printf("%d행의 평균값 = %d\n", i, (int)get_average(score[i],sizeof(score[0])/sizeof(int)));
	}

}

void pr_str_array(char** dp) {
	int i = 0;
	while (1) {
		char* n = dp[i];
		if (n == NULL)
			break;
		else
			printf("%s\n", n);
		i++;
	}
}
void Problem14_04() {
	char* story[6] = {
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools",
		"abcde",
		"12443",
		"goodman"
	};
	pr_str_array(story);
}

void set_max_ptr(int m[], int size, int **pmax) {
	int i;
	*pmax = &m[0];
	for (i = 0; i < size; i++) {
		if (**pmax < m[i])
			*pmax = &m[i];
	}
}
void Problem14_05() {
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax;

	set_max_ptr(m, 6, &pmax);
	printf("가장 큰 값은 %d\n", *pmax);

	return 0;
}

void sort_strings(char* s[], int size) {
	int i, j;
	char* temp;
	for (j = 0; j < size - 1; j++) {
		for (i = 0; i < size - 1-j; i++) {
			if (s[i][0] > s[i + 1][0]) {
				temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
			}
		}
	}
}
void Problem14_06() {
	char* p[3] = {
		"mycopy",
		"src",
		"dst"
	};
	sort_strings(p, sizeof(p) / sizeof(char*));

	int i;
	for (i = 0; i < sizeof(p) / sizeof(char*); i++)
		printf("%s\n", p[i]);
}

void Problem14_07() {
	unsigned char image[2][2] = {
		{22, 129},
		{127,254}
	};
	unsigned char* p = image;
	
	int i, j;

	for (i = 0; i < sizeof(image) / sizeof(image[0]); i++) {
		for (j = 0; j < sizeof(image[0]) / sizeof(unsigned char); j++) {
			if (*p > 0 && *p < 128) {
				*p = 0;
				p++;
			}
			else {
				*p = 255;
				p++;
			}

		}
	}

	for (i = 0; i < sizeof(image) / sizeof(image[0]); i++) {
		for (j = 0; j < sizeof(image[0]) / sizeof(unsigned char); j++) {
			printf("%d ", (int)image[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void array_copy3(int src[][3], int dst[][3]) {
	int* s = src;
	int* d = dst;

	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			*d++ = *s++;
		}
	}

}
void Problem14_08() {
	int arr[3][3] = {
		{100, 30, 67},
		{89,50,12},
		{19,60,90}
	};
	int arrc[3][3];
	array_copy3(arr, arrc);

	int i, j;
	printf("<원본 2차원 배열>\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("<복사본 2차원 배열>\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arrc[i][j]);
		}
		printf("\n");
	}

}

void init(int* p) {
	*(p + 210) = 1;
	*(p + 209) = 1;
	*(p + 211) = 1;
	*(p + 208) = 1;
	*(p + 207) = 1;
	*(p + 229) = 1;

}
void printBoard(int* p) {
	int i, j;
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			if (*(p + (i * 20) + j) == 1)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
	}
}
void bitrhEvent(int** bpOrigin, int **tpOrigin) { // 출생 - 3개의 이웃에 사람이 살면 현재의 위치에서 사람이 탄생한다
	int i, j;
	int count = 0;
	int* bp = *bpOrigin;
	int* tp = *tpOrigin;

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			if (*bp == 1) {
			}
			else if (i != 0 && i != (HEIGHT - 1) && j != 0 && j != (WIDTH - 1)) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == 0 && j == 0) {
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == 0 && j == WIDTH - 1) {
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
			}
			else if (i == 0) {
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1 && j == 0) {
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1 && j == WIDTH - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
			}
			else if (j == 0){
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (j == WIDTH - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
			}

			if (count == 3) {
				*(tp + (i * HEIGHT) + j) = 1;
			}
			bp++;
			count = 0;
		}
	}
}
void deathEvent(int** bpOrigin, int** tpOrigin) { // 4개 이상의 이웃에 사람이 살면 과밀로 인해 죽게 된다. 둘 보다 적은 이웃에만 사람이 살면 외로움으로 죽게 된다
	int i, j;
	int count = 0;
	int* bp = *bpOrigin;
	int* tp = *tpOrigin;

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			if (*bp == 0) {
			}
			else if (i != 0 && i != (HEIGHT - 1) && j != 0 && j != (WIDTH - 1)) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == 0 && j == 0) {
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == 0 && j == WIDTH - 1) {
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
			}
			else if (i == 0) {
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1 && j == 0) {
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1 && j == WIDTH - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
			}
			else if (i == HEIGHT - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
			}
			else if (j == 0) {
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - HEIGHT + 1) == 1)
					count++;
				if (*(bp + 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
				if (*(bp + HEIGHT + 1) == 1)
					count++;
			}
			else if (j == WIDTH - 1) {
				if (*(bp - HEIGHT - 1) == 1)
					count++;
				if (*(bp - HEIGHT) == 1)
					count++;
				if (*(bp - 1) == 1)
					count++;
				if (*(bp + HEIGHT - 1) == 1)
					count++;
				if (*(bp + HEIGHT) == 1)
					count++;
			}

			if (count == 3 || count == 2) {
				*(tp + (i * HEIGHT) + j) = 1;
			}
			bp++;
			count = 0;
		}
	}
}
void reinit(int** bp, int** tp) {
	int i, j;
	int* fuctemp = NULL;

	fuctemp = *bp;
	*bp = *tp;
	*tp = fuctemp;

	int* tps = *tp;
	for (i = 0; i < HEIGHT - 1; i++) {
		for (j = 0; j < WIDTH - 1; j++) {
			*tps = 0;
			tps++;
		}
	}
}
void nextGeneration(int** bp, int** tp) {
	bitrhEvent(bp, tp); 
	deathEvent(bp, tp);
	reinit(bp, tp);
}
void Problem14_09() {
	int count = 0;
	char input = 0;
	int board1[20][20] = { 0, };
	int board2[20][20] = { 0, };
	int* bp = board1;
	int* tp = board2;

	init(bp);

	while (1) {
		printBoard(bp);
		nextGeneration(&bp, &tp);
		count++;
		printf("generation %d\n", count);
		printf("종료하려면 q, 계속하려면 m : ");
		scanf("%c", &input);
		getchar();
		if (input == 'q')
			break;
		printf("\n");
	}

}

void Exercise_Chap14() {
	Problem14_09();
}