#include "TH_lib_2.h"



void Problem12_01()
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();
	/*scanf("%c", &c);*/

	printf("�ƽ�Ű �ڵ尪=%d\n", c);
}
void Problem12_02() {
	char s[100];
	char* token;

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	token = strtok(s, " ");

	while (token != NULL) {
		printf("%s", token);
		token = strtok(NULL, " ");
	}


}
int str_chr(char* s, char c) {
	int num = 0;
	int i;
	for (i = 0; i < strlen(s); i++)
		if (s[i] == c)
			num++;

	return num;

}
void Problem12_03() {
	char s[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	char r = getchar();

	printf("%c�� ���� : %d\n", r, str_chr(s, r));


}
void Problem12_04() {
	char s[100];
	char alpha[26] = {
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v','w','x','y','z'
	};

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i;
	for (i = 0; i < sizeof(alpha); i++) {
		printf("%c: %d\n", alpha[i], str_chr(s, alpha[i]));
	}

}
void Problem12_05() {
	char c;

	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		c = getchar();

		if (c == '.')
			break;

		if (isupper(c))
			printf("%c\n", tolower(c));
		else
			printf("%c\n", toupper(c));
	}

}
char* str_upper(char* s) {
	int i = 0;

	while (s[i] != NULL) {
		if (islower(s[i]))
			s[i] = toupper(s[i]);
		i++;
	}

	return s;
}
void Problem12_06() {
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	printf("��ȯ�� ���ڿ� : %s\n", str_upper(s));
}
void get_response(char* s) {
	if (!strcmp(s, "yes") || !strcmp(s, "ok"))
		printf("�������� �亯\n");
	else
		printf("�������� �亯\n");
}
void Problem12_07() {
	char s[5];
	printf("������ �Ͻðڽ��ϱ�: ");
	gets_s(s, sizeof(s));

	get_response(s);
}
void Problem12_08() {
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i = 0;
	char* token = strtok(s, " ");
	while (token != NULL) {
		i++;
		token = strtok(NULL, " ");
	}

	printf("�ܾ��� ���� %d�Դϴ�.\n", i);
}
void Problem12_09() {
	char s[100];
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	if (islower(s[0]))
		s[0] = toupper(s[0]);

	if (s[strlen(s) - 1] != ".")
		strcat(s, ".");

	printf("������ �ؽ�Ʈ: %s\n", s);
}
void Problem12_10() {
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i;
	for (i = 0; i < strlen(s); i++)
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = toupper(s[i]);

	for (i = 0; i < strlen(s) / 2; i++) {
		if (s[i] != s[strlen(s) - i - 1]) {
			printf("ȸ���� �ƴմϴ�\n");
			break;
		}
		if (i == strlen(s) / 2 - 1)
			printf("ȸ���Դϴ�\n");
	}

}
void Problem12_11() {
	char s[100];
	char* ss[5];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i = 0;
	ss[i] = strtok(s, " ");
	while (ss[i] != NULL) {
		i++;
		ss[i] = strtok(NULL, " ");
	}

	while (i != 0) {
		printf("%s ", ss[i - 1]);
		i--;
	}

}
void Problem12_12() {
	char s[100];
	printf("���� �̸��� �빮�ڷ� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i = 0;

	for (i = 0; i < strlen(s); i++)
		s[i] = tolower(s[i]);

	i = 0;
	char* ss[5];
	ss[i] = strtok(s, " ");
	while (ss[i] != NULL) {
		i++;
		ss[i] = strtok(NULL, " ");
	}

	while (i != 0) {
		printf("%s ", ss[i - 1]);
		i--;
	}
	printf("\n");

}
void Problem12_13() {
	char s[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i, count = 0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ',' || s[i] == '.')
			count++;
	}

	printf("�������� ������ %d�Դϴ�.\n", count);

}
void Problem12_14() {
	char s[100];
	char search[100];
	char change[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	printf("ã�� ���ڿ�: ");
	gets_s(search, sizeof(search));

	printf("�ٲ� ���ڿ�: ");
	gets_s(change, sizeof(change));

	strncpy(strstr(s, search), change, strlen(change));
	printf("%s\n", s);
}
void Problem12_15() {
	char s[100];
	char* ss[4];
	printf("������ �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	int i = 0;
	ss[i] = strtok(s, " ");
	while (ss[i] != NULL) {
		i++;
		ss[i] = strtok(NULL, " ");
	}

	if (!strcmp(ss[0], "add"))
		printf("������ ���: %d\n", atoi(ss[1]) + atoi(ss[2]));
	else if (!strcmp(ss[0], "sub"))
		printf("������ ���: %d\n", atoi(ss[1]) - atoi(ss[2]));
	else if (!strcmp(ss[0], "mul"))
		printf("������ ���: %d\n", atoi(ss[1]) * atoi(ss[2]));
	else if (!strcmp(ss[0], "div"))
		printf("������ ���: %d\n", atoi(ss[1]) / atoi(ss[2]));
}
void Problem12_16() {
	char s[100];
	printf("�����ϰ� ���� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(s, sizeof(s));

	printf("=========================\n");
	int i, j, k;
	for (i = 0; i < strlen(s); i++) {
		for (j = 0; j < strlen(s) - i; j++) {
			printf("%c", s[j + i]);
		}
		for (k = 0; k < i; k++) {
			printf("%c", s[k]);
		}

		printf("\n");
	}


}

/*
	* getchar(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�
	* putchar(int c) : ���� c�� ����� ���ڸ� ����Ѵ�
	* _getch(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ� (���� ���x, ����x)
	* _getche(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ� (���� ���x, ����o)
	* _putch(int c) : ���� c�� ����� ���ڸ� ����Ѵ� (���� ���x)
	* *gets_s(char *s, int size) : �� ���� ���ڿ��� �о ���� �迭 s[]�� �����Ѵ�
	* puts(cons char *s) : �迭 s[]�� ����Ǿ� �ִ� �� ���� ���ڿ��� ����Ѵ�
	*
	* isalpha(c) : �������ΰ�
	* isupper(c) : �빮���ΰ�
	* islower(c) : �ҹ����ΰ�
	* isdigit(c) : �����ΰ�
	* isalnum(c) : �����ڳ� �����ΰ�
	* isxdigit(c) : 16�����ΰ�
	* isspace(c) : ���鹮���ΰ�(' ','\n','\t','\v','\r')
	* ispunct(c) : ������ �����ΰ�
	* isprint(c) : ��� ������ �����ΰ�
	* iscntrl(c) : ���� �����ΰ�
	* isascii(c) : �ƽ�Ű �ڵ��ΰ�
	*
	* toupper(c) : �빮�ڷιٲٱ�
	* tolower(c) : �ҹ��ڷιٲٱ�
	* toascii(c) : �ƽ�Ű�ڵ�ιٲٱ�
	*
	* strlen(s) : ���ڿ� s�� ���̸� ���Ѵ�
	* strcpy(s1,s2) : s2�� s1�� �����Ѵ�
	* strcat(s1,s2) : s2�� s1�� ���� �ٿ��ִ´�
	* strcmp(s1,s2) : s1�� s2�� ���Ѵ�
	* strncpy(s1,s2,n) : s2�� �ִ� n���� ���ڸ� s1�� �����Ѵ�
	* strncat(s1,s2,n) : s2�� �ִ� n���� ���ڸ� s1�� ���� �ٿ��ִ´�
	* strncmp(s1,s2,n) : �ִ� n���� ���ڱ��� s1�� s2�� ���Ѵ�
	* strchr(s,c) : ���ڿ� s�ȿ��� ���� c�� ã�´�
	* strstr(s1,s2) : ���ڿ� s1�ȿ��� ���ڿ� s2�� ã�´�
	* char *strtok(s,delimit) : ���ڿ� s�� delimit�� �̿��Ͽ� ��ū���� �и��Ѵ�
*/
void Exercise_Chap12()
{
	Problem12_16();
};