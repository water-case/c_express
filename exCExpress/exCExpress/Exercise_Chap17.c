#include "TH_lib_2.h"


void Problem17_01() {
	int* nums = NULL;
	int n, sum = 0;

	printf("������ ����: ");
	scanf("%d", &n);
	nums = (int*)malloc(n * sizeof(int));

	int i;
	for (i = 0; i < n; i++) {
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &nums[i]);
		sum += nums[i];
	}

	printf("���� %d�Դϴ�.\n",sum);
	free(nums);
}

void Problem17_02() {
	char** strs = NULL;
	int n;
	int i;
	
	printf("���ڿ��� ����: ");
	scanf("%d", &n);
	if ((strs = malloc(n * sizeof(char*))) != NULL) {
		for (i = 0; i < n; i++) {
			strs[i] = (char*)malloc(100*sizeof(char));
			sprintf(strs[i], "\"���ڿ�%d\"", i);
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

	printf("�ּ��� ����: ");
	scanf("%d", &n);
	address = (ADDRESS*)malloc(n * sizeof(ADDRESS));

	for (i = 0; i < n; i++) {
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", address[i].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", address[i].phoneNumber);
	}

	printf("===============================\n");
	printf("�̸�            �޴��� ��ȣ\n");
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
		printf("�޸��Ҵ����\n");
		exit(1);
	}
	printf("�ܾ �Է��Ͻÿ�(�ִ� 50����) : ");
	gets(word);
	printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.\n", word);
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
		printf("���� ������ �Է��ϼ���(����-1): ");
		scanf("%d", &n);
		if (n == -1)
			break;

		// �����Ҵ�
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
	printf("���� ����Ʈ�� �̿��� ��ȭ ��ȣ�� �޴�\n");
	printf("-------------------------------------\n");
	printf("1. �ʱ�ȭ\n");
	printf("2. ��ȭ ��ȣ �߰�\n");
	printf("3. ��ȭ ��ȣ Ž��\n");
	printf("4. ��ȭ ��ȣ ����\n");
	printf("5. ����\n");
	printf("-------------------------------------\n");
}
void Problem17_06() {
	ADDRESSLINKEDLIST* headp=NULL;
	ADDRESSLINKEDLIST* prep=NULL, * p, * next;
	char search[100];
	int n;

	while (1) {
		Init06();	// �޴�����ֱ�
		printf("��ȣ�� �Է��ϼ���: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			p = headp; // �ʱ�ȭ = �Ҵ�����
			while (p != NULL) {
				next = p->link;
				free(p);
				p = next;
			}
			printf("�ʱ�ȭ�Ϸ�\n");
			break;
		case 2:
			p = (ADDRESSLINKEDLIST*)malloc(sizeof(ADDRESSLINKEDLIST));
			printf("�̸� : ");
			scanf("%s", p->name);
			printf("��ȣ : ");
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
				printf("����ֽ��ϴ�\n");
				break;
			}
			p = headp;
			while (1) {
				printf("ã�� �̸��� �Է��ϼ��� : ");
				scanf("%s", search);
				if (!strcmp(p->name, search)) {
					printf("ã�� ����� ��ȣ : %s\n", p->phoneNumber);
					break;
				}
				else if (p->link == NULL) {
					printf("ã�� ����� �����ϴ�\n");
					break;
				}else
					p = p->link;
			}
			break;
		case 4:
			if (headp == NULL) {
				printf("����ֽ��ϴ�\n");
				break;
			}
			p = headp;
			while (1) {
				printf("�ٲ� �̸��� �Է��ϼ��� : ");
				scanf("%s", search);
				if (!strcmp(p->name, search)) {
					printf("�ٲ� ��ȣ�� �Է��ϼ��� : ");
					scanf("%s", p->phoneNumber);
					break;
				}
				else if (p->link == NULL) {
					printf("�ٲ� ����� �����ϴ�\n");
				}
				else
					p = p->link;
			}
			break;
		case 5:
			printf("�����մϴ�\n");

			p = headp; // �Ҵ�����
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
	printf("1. ��ȭ ���� �߰�\n");
	printf("2. ��ȭ ���� ���\n");
	printf("3. ����\n");
	printf("----------------------------------\n");
}
void Problem17_07() {
	MOVIELINKEDLIST* headp = NULL;
	MOVIELINKEDLIST* prep = NULL, * p, * next;
	int i, select;

	printf("���� ����Ʈ�� �̿��� ��ȭ���� �޴�\n");
	while (1) {
		Init07();
		printf("��ȣ�� �����Ͻÿ� : ");
		scanf("%d", &select);

		switch (select) {
		case 1:	// ��ȭ ���� �߰�
			p = (MOVIELINKEDLIST*)malloc(sizeof(MOVIELINKEDLIST));
			printf("��ȭ�� ������ �Է��Ͻÿ� : ");
			scanf("%s", p->name);
			printf("��ȭ�� ���� ������ �Է��Ͻÿ� : ");
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
		case 2:	// ��ȭ ���� ���
			if (headp == NULL) {
				printf("��� �ֽ��ϴ�.\n");
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
		case 3:	// �Ҵ�� �޸� ����
			if (headp != NULL) {
				p = headp;
				while (p->link != NULL) {
					next = p->link;
					free(p);
					p = next;
				}
			}
			printf("�����մϴ�\n");
			exit(0);
			break;
		}
	}
}

void Exercise_Chap17() {
	Problem17_07();
}