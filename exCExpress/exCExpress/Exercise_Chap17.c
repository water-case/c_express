#include "TH_lib_2.h"


void Problem17_01() {
	int* nums = NULL;
	int n, sum = 0;

	printf("정수의 개수: ");
	scanf("%d", &n);
	nums = (int*)malloc(n * sizeof(int));

	int i;
	for (i = 0; i < n; i++) {
		printf("양의 정수를 입력하시오: ");
		scanf("%d", &nums[i]);
		sum += nums[i];
	}

	printf("합은 %d입니다.\n",sum);
	free(nums);
}

void Problem17_02() {
	char** strs = NULL;
	int n;
	int i;
	
	printf("문자열의 개수: ");
	scanf("%d", &n);
	if ((strs = malloc(n * sizeof(char*))) != NULL) {
		for (i = 0; i < n; i++) {
			strs[i] = (char*)malloc(100*sizeof(char));
			sprintf(strs[i], "\"문자열%d\"", i);
		}
	}

	printf("[ ");
	for (i = 0; i < n; i++) {
		printf("%s ",strs[i]);
	}
	printf("]\n");

	free(strs);
}

typedef struct ADDRESS {
	char name[100];
	char phoneNumber[100];
}ADDRESS;
void Problem17_03() {
	int i;
	int n;
	ADDRESS* address = NULL;

	printf("주소의 개수: ");
	scanf("%d", &n);
	address = (ADDRESS*)malloc(n * sizeof(ADDRESS));

	for (i = 0; i < n; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", address[i].name);
		printf("휴대폰 번호를 입력하시오: ");
		scanf("%s", address[i].phoneNumber);
	}

	printf("===============================\n");
	printf("이름            휴대폰 번호\n");
	printf("===============================\n");
	for (i = 0; i < n; i++) {
		printf("%s %s\n", address[i].name, address[i].phoneNumber);
	}
	printf("===============================\n");
	
	free(address);
}

void Problem17_04() {
	char* word = (char*)malloc(50 * sizeof(char));
	if (word == NULL) {
		printf("메모리할당오류\n");
		exit(1);
	}
	printf("단어를 입력하시오(최대 50글자) : ");
	gets(word);
	printf("동적 메모리에 저장된 단어는 %s입니다.\n", word);
	free(word);
}

typedef struct LINKEDLIST {
	struct LINKEDLIST* link;
	int value;
}LINKEDLIST;
void Problem17_05() {
	LINKEDLIST* headp = NULL;
	LINKEDLIST* prep=NULL, * p, * next;
	int n = 0;
	
	while (n != -1) {
		printf("양의 정수를 입력하세요(종료-1): ");
		scanf("%d", &n);
		if (n == -1)
			break;

		// 공간할당
		p = (LINKEDLIST*)malloc(sizeof(LINKEDLIST));
		p->value = n;
		
		if (headp == NULL)
			headp = p;
		else
			prep->link = p;

		p->link = NULL;
		prep = p;
		
	}

	p = headp;
	while (p != NULL) {
		printf("%d->", p->value);
		p = p->link;
	}
	printf("NULL\n");

	p = headp;
	while (p != NULL) {
		next = p->link;
		free(p);
		p = next;
	}
	return 0;

}

typedef struct ADDRESSLINKEDLIST {
	struct ADDRESSLINKEDLIST* link;
	char name[100];
	char phoneNumber[100];
}ADDRESSLINKEDLIST;
void Init06() {
	printf("연결 리스트를 이용한 전화 번호부 메뉴\n");
	printf("-------------------------------------\n");
	printf("1. 초기화\n");
	printf("2. 전화 번호 추가\n");
	printf("3. 전화 번호 탐색\n");
	printf("4. 전화 번호 변경\n");
	printf("5. 종료\n");
	printf("-------------------------------------\n");
}
void Problem17_06() {
	ADDRESSLINKEDLIST* headp=NULL;
	ADDRESSLINKEDLIST* prep=NULL, * p, * next;
	char search[100];
	int n;

	while (1) {
		Init06();	// 메뉴띄워주기
		printf("번호를 입력하세요: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			p = headp; // 초기화 = 할당해제
			while (p != NULL) {
				next = p->link;
				free(p);
				p = next;
			}
			printf("초기화완료\n");
			break;
		case 2:
			p = (ADDRESSLINKEDLIST*)malloc(sizeof(ADDRESSLINKEDLIST));
			printf("이름 : ");
			scanf("%s", p->name);
			printf("번호 : ");
			scanf("%s", p->phoneNumber);

			if (headp == NULL)
				headp = p;
			else
				prep->link = p;
			p->link = NULL;
			prep = p;

			break;
		case 3:
			if (headp == NULL) {
				printf("비어있습니다\n");
				break;
			}
			p = headp;
			while (1) {
				printf("찾을 이름을 입력하세요 : ");
				scanf("%s", search);
				if (!strcmp(p->name, search)) {
					printf("찾는 사람의 번호 : %s\n", p->phoneNumber);
					break;
				}
				else if (p->link == NULL) {
					printf("찾는 사람이 없습니다\n");
					break;
				}else
					p = p->link;
			}
			break;
		case 4:
			if (headp == NULL) {
				printf("비어있습니다\n");
				break;
			}
			p = headp;
			while (1) {
				printf("바꿀 이름을 입력하세요 : ");
				scanf("%s", search);
				if (!strcmp(p->name, search)) {
					printf("바꿀 번호를 입력하세요 : ");
					scanf("%s", p->phoneNumber);
					break;
				}
				else if (p->link == NULL) {
					printf("바꿀 사람이 없습니다\n");
				}
				else
					p = p->link;
			}
			break;
		case 5:
			printf("종료합니다\n");

			p = headp; // 할당해제
			while (p != NULL) { 
				next = p->link;
				free(p);
				p = next;
			}

			exit(0);
		}

	}

}

typedef struct MOVIELINKEDLIST {
	struct MOVIELINKEDLIST* link;
	char name[20];
	char year[5];
}MOVIELINKEDLIST;
void Init07() {
	printf("----------------------------------\n");
	printf("1. 영화 정보 추가\n");
	printf("2. 영화 정보 출력\n");
	printf("3. 종료\n");
	printf("----------------------------------\n");
}
void Problem17_07() {
	MOVIELINKEDLIST* headp = NULL;
	MOVIELINKEDLIST* prep = NULL, * p, * next;
	int i, select;

	printf("연결 리스트를 이용한 영화관리 메뉴\n");
	while (1) {
		Init07();
		printf("번호를 선택하시오 : ");
		scanf("%d", &select);

		switch (select) {
		case 1:	// 영화 정보 추가
			p = (MOVIELINKEDLIST*)malloc(sizeof(MOVIELINKEDLIST));
			printf("영화의 제목을 입력하시오 : ");
			scanf("%s", p->name);
			printf("영화의 개봉 연도를 입력하시오 : ");
			scanf("%s", p->year);
			
			if (headp == NULL) {
				headp = p;
			}
			else {
				prep->link = p;
			}
			p->link = NULL;
			prep = p;

			break;
		case 2:	// 영화 정보 출력
			if (headp == NULL) {
				printf("비어 있습니다.\n");
				break;
			}
			else {
				p = headp;
				while (1) {
					printf("%s(%s) -> ", p->name, p->year);
					if (p->link != NULL) {
						p = p->link;
					}
					else {
						printf("NULL\n");
						break;
					}
				}
			}

			break;
		case 3:	// 할당된 메모리 해제
			if (headp != NULL) {
				p = headp;
				while (p->link != NULL) {
					next = p->link;
					free(p);
					p = next;
				}
			}
			printf("종료합니다\n");
			exit(0);
			break;
		}
	}
}

void Exercise_Chap17() {
	Problem17_07();
}