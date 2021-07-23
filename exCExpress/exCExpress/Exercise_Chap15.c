#include "TH_lib_2.h"
#define SIZE 10

void Problem15_01() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char fileName1[100];
	char fileName2[100];

	printf("첫번째 파일 이름 : ");
	scanf("%s", fileName1);
	if ((fp1 = fopen(fileName1, "r")) == NULL) {
		printf("fp1 파일 열기 실패\n");
		exit(1);
	}
	printf("두번째 파일 이름 : ");
	scanf("%s", fileName2);
	if ((fp2 = fopen(fileName2, "r")) == NULL) {
		printf("fp2 파일 열기 실패\n");
		exit(1);
	}

	// 텍스트 내용 비교하는 로직
	int c1, c2;
	while (1) {
		if ((c1 = fgetc(fp1)) != EOF && (c2 = fgetc(fp2)) != EOF) {
			if (c1 != c2) {
				printf("두 파일은 서로 다릅니다\n");
				break;
			}
		}
		else if (!((c1 = fgetc(fp1)) != EOF && (c2 = fgetc(fp2)) != EOF)) {
			printf("두 파일은 서로 다릅니다\n");
			break;
		}
		else {
			printf("두 파일은 서로 같습니다\n");
			break;
		}
	}
	

	fclose(fp1);
	fclose(fp2);
}

void Problem15_02() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char fileName1[100];
	char fileName2[100];

	printf("첫번째 파일 이름 : ");
	scanf("%s", fileName1);
	if ((fp1 = fopen(fileName1, "r")) == NULL) {
		printf("fp1 파일 열기 실패\n");
		exit(1);
	}
	printf("두번째 파일 이름 : ");
	scanf("%s", fileName2);
	if ((fp2 = fopen(fileName2, "w+")) == NULL) {
		printf("fp2 파일 열기 실패\n");
		exit(1);
	}

	// 문자를 하나씩 읽어서 대문자로 변경후 입력하는 로직
	char c;
	while ((c = fgetc(fp1)) != EOF) {
		if(!isupper(c))
			fputc((char)toupper(c), fp2);
		else
			fputc(c, fp2);
	}
	
	// 변경된 파일을 출력하는 로직
	rewind(fp2);
	while ((c = fgetc(fp2)) != EOF) {
		putchar(c);
	}
	printf("\n");


	fclose(fp1);
	fclose(fp2);

}

void Problem15_03() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char* fp1Name[100];
	char* fp2Name[100];
	char buffer[SIZE];

	printf("원본 파일 이름: ");
	scanf("%s", fp1Name);
	fp1 = fopen(fp1Name, "rb");

	printf("복사 파일 이름: ");
	scanf("%s", fp2Name);
	fp2 = fopen(fp2Name, "wb");

	while (fread(buffer, sizeof(char), SIZE, fp1) != 0) {
		fwrite(buffer, sizeof(char), SIZE, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}

void Problem15_04() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char* fp1Name[100];
	char* fp2Name[100];
	char buffer1[SIZE] = { 0, };
	char buffer2[SIZE] = { 0, };

	printf("첫번째 파일 이름: ");
	scanf("%s", fp1Name);
	if ((fp1 = fopen(fp1Name, "r")) == NULL) {
		printf("fp1 파일 열기 실패\n");
		exit(1);
	}

	printf("두번째 파일 이름: ");
	scanf("%s", fp2Name);
	if ((fp2 = fopen(fp2Name, "r")) == NULL) {
		printf("fp2 파일 열기 실패\n");
		exit(1);
	}
	while (1) {
		if (fgets(buffer1, SIZE, fp1) != NULL && fgets(buffer2, SIZE, fp2) != NULL) {
			if (strcmp(buffer1, buffer2) != 0) {
				printf("<< %s\n", buffer1);
				printf(">> %s\n", buffer2);
				break;
			}
		}
		else if (strcmp(buffer1, buffer2) == 0) {
			printf("파일은 서로 일치함\n");
			break;
		}
		else {
			printf("<< %s\n", buffer1);
			printf(">> %s\n", buffer2);
			break;
		}
	}
}

struct Student {
	char* name[20];
	int kor;
	int math;
	int eng;
};
void Problem15_05() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char* name[20];
	int kor, math, eng, sum = 0;
	double avg;

	// 성적파일을 읽기모드로 연다
	if ((fp1 = fopen("score.txt", "r")) == NULL) {
		printf("파일을 열 수 없습니다,");
		exit(1);
	}
	if ((fp2 = fopen("average.txt", "w")) == NULL) {
		printf("파일을 열 수 없습니다,");
		exit(1);
	}

	// 파일에서 성적을 읽어온다
	while (!feof(fp1)) {
		fscanf(fp1, "%s %d %d %d",name, &kor, &math, &eng);
	// 읽어온 파일에서 성적의 평균을 구한다
		sum = kor + math + eng;
		avg = (double)sum / 3;
	// 평균을 새로운 파일에 작성한다, 소수점2자리까지
		fprintf(fp2, "%s %.2lf\n", name, avg);
	}

	fclose(fp1);
	fclose(fp2);
	

}

void Problem15_06() {
	FILE* fp = NULL;
	char name[100];
	char c;
	int count = 0;

	// 파일이름을 입력받습니다
	printf("파일 이름을 입력하시오 : ");
	scanf("%s", name);
	getchar();

	// 파일열기
	if ((fp = fopen(name, "r")) == NULL) {
		printf("파일을 열 수 없습니다");
		exit(1);
	}
	// 파일 내의 인쇄 가능한 문자들의 개수를 계산
	while (!feof(fp)) {
		fscanf(fp, "%c", &c);
		if (isprint(c)) {
			count++;
		}
	}
	// 개수 출력
	printf("문자의 개수는 %d", count);
	
	// 파일닫기
	fclose(fp);
}

void Problem15_07() {
	FILE* fp = NULL;
	char name[100];
	char buffer[100];

	// 파일 이름을 입력받는다
	printf("파일 이름을 입력하시오 : ");
	scanf("%s", name);
	getchar();

	// 파일을 쓰기모드로 연다
	if ((fp = fopen(name,"w")) == NULL) {
		printf("파일을 열 수 없습니다");
		exit(1);
	}
	
	while (fgets(buffer, 100, stdin)) {
	// 내용을 한줄씩 입력받는다

	// 입력받은 내용을 한줄씩 파일에 작성한다
		fprintf(fp, "%s" , buffer);
	}

	//파일을 닫는다
	fclose(fp);
}

void Problem15_08() {
	FILE* fp;
	int r[100];
	int i;

	for (i = 0; i < 100; i++)
		r[i] = rand()%100;

	// 텍스트파일로 난수저장
	if ((fp = fopen("sample1.txt", "w")) == NULL) {
		printf("파일을 열 수 없습니다");
		exit(1);
	}
	for (i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", r[i]);
	}

	// 이진파일로 난수저장 
	if ((fp = fopen("sample2.txt", "wb")) == NULL) {
		printf("파일을 열 수 없습니다");
		exit(1);
	}
	
	fwrite(r, sizeof(int), 100, fp);
	

	fclose(fp);
}

void Problem15_09(char* argv[]) {
	FILE* fp1;
	FILE* fp2;
	char buffer[100];

	printf("%s 파일 + %s 파일을 %s 파일로 복사합니다.\n", argv[1], argv[2], argv[3]);

	if ((fp1 = fopen(argv[1], "r")) == NULL) {
		printf("1파일을 열 수 없습니다");
		exit(1);
	}

	if ((fp2 = fopen(argv[3], "w")) == NULL) {
		printf("3파일을 열 수 없습니다");
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	if ((fp1 = fopen(argv[2], "r")) == NULL) {
		printf("2파일을 열 수 없습니다");
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);


}

void Problem15_10() {
	FILE* fp = NULL;
	char buffer[100];
	int count = 0;

	if ((fp = fopen("a.txt", "r")) == NULL) {
		printf("파일을 열 수 없습니다\n");
		exit(1);
	}

	while (!feof(fp)) {
		fgets(buffer, 100, fp);
		printf("%6d: %s", count, buffer);
		count++;
	}
	fclose(fp);

}

void menu() {
	printf("================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("================\n");
}
void Problem15_11() {
	FILE* fp;
	int n;
	char bookName[100], name[100], publisher[100] ;
	char buffer[100];

	if ((fp = fopen("data.txt", "a+")) == NULL) {
		printf("파일을 읽을 수 없습니다.\n");
		exit(1);
	}

	while (1) {
		menu();
		printf("정수값을 입력하시오: ");
		scanf("%d", &n);
		getchar();

		switch (n) {
		case 1:
			// 추가
			printf("도서의 이름: ");
			scanf("%s", bookName);
			printf("저자: ");
			scanf("%s", name);
			printf("출판사: ");
			scanf("%s", publisher);
			fprintf(fp, "%s %s %s \n", bookName, name, publisher);
			break;
		case 2:
			// 모든 내용 출력
			rewind(fp);
			printf("도서의 이름 저자 출판사\n");
			while (!feof(fp)) {
				fscanf(fp, "%s %s %s\n", bookName, name, publisher);
				printf("%s %s %s\n", bookName, name, publisher);
			}
			break;
		case 3:
			// 검색
			rewind(fp);
			printf("검색할 도서의 이름: ");
			scanf("%s", buffer);
			getchar();
			while (!feof(fp)) {
				fscanf(fp, "%s %s %s\n", bookName, name, publisher);
				if (!strcmp(buffer, bookName)) {
					printf("%s %s %s\n", bookName, name, publisher);
					break;
				}
			}
			break;
		case 4:
			printf("종료합니다\n");
			exit(0);
			break;
		}
	}

}

void Problem15_12() {
	FILE* fp = NULL;
	char fileName[100];
	char word[100];
	char buffer[100];
	int count = 1;
	
	// 파일 이름을 입력받기
	printf("파일 이름: ");
	scanf("%s", fileName);
	
	// 파일 열기
	if ((fp = fopen(fileName, "r")) == NULL) {
		printf("파일을 열 수 없습니다");
		exit(1);
	}
	// 탐색할 단어 입력받기
	printf("탐색할 단어: ");
	scanf("%s", word);

	// 단어가 위치한 줄을 찾아 출력
	while (fgets(buffer, 100, fp)) {
		if (strstr(buffer, word)) {
			printf("%s : %d  %s", fileName, count, buffer);
		}
		
		
		count++;
	}


}

void Problem15_13() {
	FILE* rfp = NULL;
	FILE* wfp = NULL;
	char buffer[100];
	char* tok;

	// 파일을 연다
	if ((rfp = fopen("aread.txt", "r")) == NULL) {
		printf("r파일을 열 수 없습니다\n");
		exit(1);
	}
	if ((wfp = fopen("awrite.txt", "w")) == NULL) {
		printf("w파일을 열 수 없습니다\n");
		exit(1);
	}
	// 특정한 단어가 있는지 확인
	while (fgets(buffer, 100, rfp)) {
		tok = strtok(buffer, "");
		if (strstr(tok, "android")) {
			// 출력파일에 다른 단어로 변경하여 출력한다
			fputs("안드로이드", wfp);
			tok = strtok(NULL, "");
		}
		else {
			fputs(tok, wfp);
			tok = strtok(NULL, "");
		}
	}

	fclose(rfp);
	fclose(wfp);

}

void Exercise_Chap15(char* argv[]) {
	Problem15_13();
}