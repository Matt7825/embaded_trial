#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int secret = 7;
    int guess = 0;

    while (secret != guess) {
        printf("Vvedi chislo: ");       // 1. Спрашиваем ВНУТРИ цикла
        scanf("%d", &guess);            // 2. Процент и амперсанд на месте!

        if (secret != guess) {
            printf("try again\n");      // 3. Убрали break, добавили перенос строки
        }
        else {
            printf("you win\n");
        }
    }

    return 0;
}