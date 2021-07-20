#include "TH_lib_2.h"



void Problem12_01()
{
	char c;
	printf("문자를 입력하시오: ");
	c = getchar();
	/*scanf("%c", &c);*/

	printf("아스키 코드값=%d\n", c);
}
void Problem12_02() {
	char s[100];
	char* token;

	printf("공백 문자가 있는 문자열을 입력하시오: ");
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

	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	printf("개수를 셀 문자를 입력하시오: ");
	char r = getchar();

	printf("%c의 개수 : %d\n", r, str_chr(s, r));


}
void Problem12_04() {
	char s[100];
	char alpha[26] = {
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v','w','x','y','z'
	};

	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	int i;
	for (i = 0; i < sizeof(alpha); i++) {
		printf("%c: %d\n", alpha[i], str_chr(s, alpha[i]));
	}

}
void Problem12_05() {
	char c;

	while (1) {
		printf("문자를 입력하시오: ");
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
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	printf("변환된 문자열 : %s\n", str_upper(s));
}
void get_response(char* s) {
	if (!strcmp(s, "yes") || !strcmp(s, "ok"))
		printf("긍정적인 답변\n");
	else
		printf("부정적인 답변\n");
}
void Problem12_07() {
	char s[5];
	printf("게임을 하시겠습니까: ");
	gets_s(s, sizeof(s));

	get_response(s);
}
void Problem12_08() {
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	int i = 0;
	char* token = strtok(s, " ");
	while (token != NULL) {
		i++;
		token = strtok(NULL, " ");
	}

	printf("단어의 수는 %d입니다.\n", i);
}
void Problem12_09() {
	char s[100];
	printf("텍스트를 입력하시오: ");
	gets_s(s, sizeof(s));

	if (islower(s[0]))
		s[0] = toupper(s[0]);

	if (s[strlen(s) - 1] != ".")
		strcat(s, ".");

	printf("수정된 텍스트: %s\n", s);
}
void Problem12_10() {
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	int i;
	for (i = 0; i < strlen(s); i++)
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = toupper(s[i]);

	for (i = 0; i < strlen(s) / 2; i++) {
		if (s[i] != s[strlen(s) - i - 1]) {
			printf("회문이 아닙니다\n");
			break;
		}
		if (i == strlen(s) / 2 - 1)
			printf("회문입니다\n");
	}

}
void Problem12_11() {
	char s[100];
	char* ss[5];
	printf("문자열을 입력하시오: ");
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
	printf("성과 이름을 대문자로 입력하시오: ");
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
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	int i, count = 0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ',' || s[i] == '.')
			count++;
	}

	printf("구두점의 개수는 %d입니다.\n", count);

}
void Problem12_14() {
	char s[100];
	char search[100];
	char change[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));

	printf("찾을 문자열: ");
	gets_s(search, sizeof(search));

	printf("바꿀 문자열: ");
	gets_s(change, sizeof(change));

	strncpy(strstr(s, search), change, strlen(change));
	printf("%s\n", s);
}
void Problem12_15() {
	char s[100];
	char* ss[4];
	printf("연산을 입력하시오: ");
	gets_s(s, sizeof(s));

	int i = 0;
	ss[i] = strtok(s, " ");
	while (ss[i] != NULL) {
		i++;
		ss[i] = strtok(NULL, " ");
	}

	if (!strcmp(ss[0], "add"))
		printf("연산의 결과: %d\n", atoi(ss[1]) + atoi(ss[2]));
	else if (!strcmp(ss[0], "sub"))
		printf("연산의 결과: %d\n", atoi(ss[1]) - atoi(ss[2]));
	else if (!strcmp(ss[0], "mul"))
		printf("연산의 결과: %d\n", atoi(ss[1]) * atoi(ss[2]));
	else if (!strcmp(ss[0], "div"))
		printf("연산의 결과: %d\n", atoi(ss[1]) / atoi(ss[2]));
}
void Problem12_16() {
	char s[100];
	printf("광고하고 싶은 텍스트를 입력하시오: ");
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
	* getchar(void) : 하나의 문자를 읽어서 반환한다
	* putchar(int c) : 변수 c에 저장된 문자를 출력한다
	* _getch(void) : 하나의 문자를 읽어서 반환한다 (버퍼 사용x, 에코x)
	* _getche(void) : 하나의 문자를 읽어서 반환한다 (버퍼 사용x, 에코o)
	* _putch(int c) : 변수 c에 저장된 문자를 출력한다 (버퍼 사용x)
	* *gets_s(char *s, int size) : 한 줄의 문자열을 읽어서 문자 배열 s[]에 저장한다
	* puts(cons char *s) : 배열 s[]에 저장되어 있는 한 줄의 문자열을 출력한다
	*
	* isalpha(c) : 영문자인가
	* isupper(c) : 대문자인가
	* islower(c) : 소문자인가
	* isdigit(c) : 숫자인가
	* isalnum(c) : 영문자나 숫자인가
	* isxdigit(c) : 16진수인가
	* isspace(c) : 공백문자인가(' ','\n','\t','\v','\r')
	* ispunct(c) : 구두점 문자인가
	* isprint(c) : 출력 가능한 문자인가
	* iscntrl(c) : 제어 문자인가
	* isascii(c) : 아스키 코드인가
	*
	* toupper(c) : 대문자로바꾸기
	* tolower(c) : 소문자로바꾸기
	* toascii(c) : 아스키코드로바꾸기
	*
	* strlen(s) : 문자열 s의 길이를 구한다
	* strcpy(s1,s2) : s2를 s1에 복사한다
	* strcat(s1,s2) : s2를 s1의 끝에 붙여넣는다
	* strcmp(s1,s2) : s1과 s2를 비교한다
	* strncpy(s1,s2,n) : s2의 최대 n개의 문자를 s1에 복사한다
	* strncat(s1,s2,n) : s2의 최대 n개의 문자를 s1의 끝에 붙여넣는다
	* strncmp(s1,s2,n) : 최대 n개의 문자까지 s1과 s2를 비교한다
	* strchr(s,c) : 문자열 s안에서 문자 c를 찾는다
	* strstr(s1,s2) : 문자열 s1안에서 문자열 s2를 찾는다
	* char *strtok(s,delimit) : 문자열 s를 delimit를 이용하여 토큰으로 분리한다
*/
void Exercise_Chap12()
{
	Problem12_16();
};