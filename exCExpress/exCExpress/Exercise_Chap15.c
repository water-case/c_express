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

	// ���������� �б���� ����
	if ((fp1 = fopen("score.txt", "r")) == NULL) {
		printf("������ �� �� �����ϴ�,");
		exit(1);
	}
	if ((fp2 = fopen("average.txt", "w")) == NULL) {
		printf("������ �� �� �����ϴ�,");
		exit(1);
	}

	// ���Ͽ��� ������ �о�´�
	while (!feof(fp1)) {
		fscanf(fp1, "%s %d %d %d",name, &kor, &math, &eng);
	// �о�� ���Ͽ��� ������ ����� ���Ѵ�
		sum = kor + math + eng;
		avg = (double)sum / 3;
	// ����� ���ο� ���Ͽ� �ۼ��Ѵ�, �Ҽ���2�ڸ�����
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

	// �����̸��� �Է¹޽��ϴ�
	printf("���� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	getchar();

	// ���Ͽ���
	if ((fp = fopen(name, "r")) == NULL) {
		printf("������ �� �� �����ϴ�");
		exit(1);
	}
	// ���� ���� �μ� ������ ���ڵ��� ������ ���
	while (!feof(fp)) {
		fscanf(fp, "%c", &c);
		if (isprint(c)) {
			count++;
		}
	}
	// ���� ���
	printf("������ ������ %d", count);
	
	// ���ϴݱ�
	fclose(fp);
}

void Problem15_07() {
	FILE* fp = NULL;
	char name[100];
	char buffer[100];

	// ���� �̸��� �Է¹޴´�
	printf("���� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	getchar();

	// ������ ������� ����
	if ((fp = fopen(name,"w")) == NULL) {
		printf("������ �� �� �����ϴ�");
		exit(1);
	}
	
	while (fgets(buffer, 100, stdin)) {
	// ������ ���پ� �Է¹޴´�

	// �Է¹��� ������ ���پ� ���Ͽ� �ۼ��Ѵ�
		fprintf(fp, "%s" , buffer);
	}

	//������ �ݴ´�
	fclose(fp);
}

void Problem15_08() {
	FILE* fp;
	int r[100];
	int i;

	for (i = 0; i < 100; i++)
		r[i] = rand()%100;

	// �ؽ�Ʈ���Ϸ� ��������
	if ((fp = fopen("sample1.txt", "w")) == NULL) {
		printf("������ �� �� �����ϴ�");
		exit(1);
	}
	for (i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", r[i]);
	}

	// �������Ϸ� �������� 
	if ((fp = fopen("sample2.txt", "wb")) == NULL) {
		printf("������ �� �� �����ϴ�");
		exit(1);
	}
	
	fwrite(r, sizeof(int), 100, fp);
	

	fclose(fp);
}

void Problem15_09(char* argv[]) {
	FILE* fp1;
	FILE* fp2;
	char buffer[100];

	printf("%s ���� + %s ������ %s ���Ϸ� �����մϴ�.\n", argv[1], argv[2], argv[3]);

	if ((fp1 = fopen(argv[1], "r")) == NULL) {
		printf("1������ �� �� �����ϴ�");
		exit(1);
	}

	if ((fp2 = fopen(argv[3], "w")) == NULL) {
		printf("3������ �� �� �����ϴ�");
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	if ((fp1 = fopen(argv[2], "r")) == NULL) {
		printf("2������ �� �� �����ϴ�");
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
		printf("������ �� �� �����ϴ�\n");
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
	printf("1. �߰�\n");
	printf("2. ���\n");
	printf("3. �˻�\n");
	printf("4. ����\n");
	printf("================\n");
}
void Problem15_11() {
	FILE* fp;
	int n;
	char bookName[100], name[100], publisher[100] ;
	char buffer[100];

	if ((fp = fopen("data.txt", "a+")) == NULL) {
		printf("������ ���� �� �����ϴ�.\n");
		exit(1);
	}

	while (1) {
		menu();
		printf("�������� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		getchar();

		switch (n) {
		case 1:
			// �߰�
			printf("������ �̸�: ");
			scanf("%s", bookName);
			printf("����: ");
			scanf("%s", name);
			printf("���ǻ�: ");
			scanf("%s", publisher);
			fprintf(fp, "%s %s %s \n", bookName, name, publisher);
			break;
		case 2:
			// ��� ���� ���
			rewind(fp);
			printf("������ �̸� ���� ���ǻ�\n");
			while (!feof(fp)) {
				fscanf(fp, "%s %s %s\n", bookName, name, publisher);
				printf("%s %s %s\n", bookName, name, publisher);
			}
			break;
		case 3:
			// �˻�
			rewind(fp);
			printf("�˻��� ������ �̸�: ");
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
			printf("�����մϴ�\n");
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
	
	// ���� �̸��� �Է¹ޱ�
	printf("���� �̸�: ");
	scanf("%s", fileName);
	
	// ���� ����
	if ((fp = fopen(fileName, "r")) == NULL) {
		printf("������ �� �� �����ϴ�");
		exit(1);
	}
	// Ž���� �ܾ� �Է¹ޱ�
	printf("Ž���� �ܾ�: ");
	scanf("%s", word);

	// �ܾ ��ġ�� ���� ã�� ���
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

	// ������ ����
	if ((rfp = fopen("aread.txt", "r")) == NULL) {
		printf("r������ �� �� �����ϴ�\n");
		exit(1);
	}
	if ((wfp = fopen("awrite.txt", "w")) == NULL) {
		printf("w������ �� �� �����ϴ�\n");
		exit(1);
	}
	// Ư���� �ܾ �ִ��� Ȯ��
	while (fgets(buffer, 100, rfp)) {
		tok = strtok(buffer, "");
		if (strstr(tok, "android")) {
			// ������Ͽ� �ٸ� �ܾ�� �����Ͽ� ����Ѵ�
			fputs("�ȵ���̵�", wfp);
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