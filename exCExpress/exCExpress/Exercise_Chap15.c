#include "TH_lib_2.h"
#define SIZE 10

void Problem15_01() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char fileName1[100];
	char fileName2[100];

	printf("ù��° ���� �̸� : ");
	scanf("%s", fileName1);
	if ((fp1 = fopen(fileName1, "r")) == NULL) {
		printf("fp1 ���� ���� ����\n");
		exit(1);
	}
	printf("�ι�° ���� �̸� : ");
	scanf("%s", fileName2);
	if ((fp2 = fopen(fileName2, "r")) == NULL) {
		printf("fp2 ���� ���� ����\n");
		exit(1);
	}

	// �ؽ�Ʈ ���� ���ϴ� ����
	int c1, c2;
	while (1) {
		if ((c1 = fgetc(fp1)) != EOF && (c2 = fgetc(fp2)) != EOF) {
			if (c1 != c2) {
				printf("�� ������ ���� �ٸ��ϴ�\n");
				break;
			}
		}
		else if (!((c1 = fgetc(fp1)) != EOF && (c2 = fgetc(fp2)) != EOF)) {
			printf("�� ������ ���� �ٸ��ϴ�\n");
			break;
		}
		else {
			printf("�� ������ ���� �����ϴ�\n");
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

	printf("ù��° ���� �̸� : ");
	scanf("%s", fileName1);
	if ((fp1 = fopen(fileName1, "r")) == NULL) {
		printf("fp1 ���� ���� ����\n");
		exit(1);
	}
	printf("�ι�° ���� �̸� : ");
	scanf("%s", fileName2);
	if ((fp2 = fopen(fileName2, "w+")) == NULL) {
		printf("fp2 ���� ���� ����\n");
		exit(1);
	}

	// ���ڸ� �ϳ��� �о �빮�ڷ� ������ �Է��ϴ� ����
	char c;
	while ((c = fgetc(fp1)) != EOF) {
		if(!isupper(c))
			fputc((char)toupper(c), fp2);
		else
			fputc(c, fp2);
	}
	
	// ����� ������ ����ϴ� ����
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

	printf("���� ���� �̸�: ");
	scanf("%s", fp1Name);
	fp1 = fopen(fp1Name, "rb");

	printf("���� ���� �̸�: ");
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

	printf("ù��° ���� �̸�: ");
	scanf("%s", fp1Name);
	if ((fp1 = fopen(fp1Name, "r")) == NULL) {
		printf("fp1 ���� ���� ����\n");
		exit(1);
	}

	printf("�ι�° ���� �̸�: ");
	scanf("%s", fp2Name);
	if ((fp2 = fopen(fp2Name, "r")) == NULL) {
		printf("fp2 ���� ���� ����\n");
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
			printf("������ ���� ��ġ��\n");
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