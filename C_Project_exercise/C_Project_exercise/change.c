#include <stdio.h>

void change() {
	int user, change = 0;
	int price, c5000, c1000, c500, c100;
	
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);
	printf("����ڰ� �� ��: ");
	scanf("%d", &user);
	change = user - price;

	c5000 = change / 5000;
	change %= 5000;

	c1000 = change / 1000;
	change %= 1000;

	c500 = change / 500;
	change %= 500;

	c100 = change / 100;
	change %= 100;

	printf("��õ���� : %d��\n", c5000);
	printf("õ���� : %d��\n", c1000);
	printf("����� ���� : %d��\n", c500);
	printf("��� ���� : %d��\n", c100);

}