#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 10

int main() {
    system("chcp 65001");

    long arr[n];
    long *pel, *pend;
    long sum = 0;
    int k = 0;

    printf("Введіть 10 елементів:\n");

    while (k < n) {
        scanf("%ld", arr + k);
        k+=1;
    }

    pend = arr + k;

    for (pel = arr; pel < pend; pel+=1) {
        if (*pel < 0) {
            sum += (*pel) * (*pel);
        }
    }

    printf("Сума квадратів від’ємних елементів: %ld\n", sum);

    return 0;
}