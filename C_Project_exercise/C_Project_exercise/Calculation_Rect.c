#include <stdio.h>

void Calculation_Rect() {
	double w, h, area, perimeter;

	printf("�簢���� ����,������ ���̸� �Է��ϼ��� : ");
	scanf("%lf%lf", &w, &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ���� : %lf\n�簢���� �ѷ� : %lf\n", area, perimeter);
}