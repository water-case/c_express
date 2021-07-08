#include <stdio.h>

void Calculation_Rect() {
	double w, h, area, perimeter;

	printf("사각형의 가로,세로의 길이를 입력하세요 : ");
	scanf("%lf%lf", &w, &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이 : %lf\n사각형의 둘레 : %lf\n", area, perimeter);
}