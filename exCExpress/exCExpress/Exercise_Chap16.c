#include "TH_lib_2.h"

#define DEBUG
#define POWER_TYPE 1
#ifdef DEBUG
#if POWER_TYPE == 0
int power2(int x, int y) {
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++) {
		printf("result = %d\n", __LINE__);
		result *= x;
	}
	return result;
#elif POWER_TYPE == 1
double power2(int x, int y) {
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++) {
		printf("result = %d\n", __LINE__);
		result *= x;
	}
	return result;
}
#endif
#endif
void Problem16_01() {
	power2(3, 5);
}


#define GET_MIN(x,y,z) ((x)>(y)) ? (((y)>(z)) ? (z) : (y)) : (((x)>(z)) ? (z) : (x))
void Problem16_02() {
	printf("%d\n", GET_MIN(4, 2, 3));
}

#define ARRAY_INIT(array, size, value) { int i; for(i=0;i<size;i++){ array[i] = value; } }
void Problem16_03() {
	int array[10];

	ARRAY_INIT(array, 10, 4);

	int i;
	printf("[ ");
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");
}

void Problem16_04() {

}

void Exercise_Chap16(char* argv[]) {
	Problem16_03();
}