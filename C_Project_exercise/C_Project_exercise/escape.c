#include <stdio.h>

void Excape() {
	int id, pass;

	printf("���̵�� �н����带 4���Ǽ��ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf("%d", &id);
	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�. \n", id, pass);

	return 0;
}