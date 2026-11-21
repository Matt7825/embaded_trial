#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_Hello() {
	printf("Program Started \n");
}
float calculate_average(int num[4], float res) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		printf("Vvedite chislo");
		scanf("%d", &num[i]);
		sum += num[i];
	}
	res = (float)sum / 4;
	printf("%f", res);
	return res;
}
int main()
{
	int num[4];
	float res = 0;
	float result;
	print_Hello();
	result = calculate_average(num, res);
	return 0;
}