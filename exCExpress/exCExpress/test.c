#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CLOCKS_PER_SEC ((clock_t)1000)

int test1()
{
	int random1 = 0;
	int random2 = 0;
	int input;
	int i, count=0;
	double score;

	srand(time(NULL));

	clock_t t0 = clock();
	printf("t0 : %d\n", t0);
	for (i = 0; i < 10; i++)
	{
		random1 = (rand() % 8) + 2;
		random2 = (rand() % 8) + 2;
		printf("[문제%d] : %d x %d = ", i + 1, random1, random2);
		scanf("%d", &input);
		if ((random1 * random2) == input)
			count++;
		else
			printf("\t틀렸습니다\n");
	}
	clock_t t1 = clock();
	printf("t1 : %d\n", t1);

	score = (10 > count) ? 0.0 : 100 * (60 - (t1 - t0) / CLOCKS_PER_SEC) / 60;
	printf("점수 = %lf점 ( 총 %lf 초)\n", score, ((double)(t1 - t0) / CLOCKS_PER_SEC));

}