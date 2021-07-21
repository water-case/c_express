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

void Problem15_05() {

}

void Exercise_Chap15() {
	Problem15_04();
}