#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;
	int otmetki[4];
		for (int i = 0; i < 4; i++) {
		printf("Vvedite otmetku \n");
		scanf("%d", &otmetki[i]);
		sum += otmetki[i];
	}
	float sr_ot = (float)sum / 4;
	printf("%f", sr_ot);
	return 0;
}


