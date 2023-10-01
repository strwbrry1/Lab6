#include "stdio.h"
#include "math.h"
#include "Windows.h"

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int n;
    float p;

    printf("sum = ");
    scanf_s("%d", &n);

    printf("percent = ");
    scanf_s("%f", &p);

    i = 0;
    do {
        printf("%d RUB in %d year\n", n, i);
        n = (n * (100 + p)) / 100;
        i++;
    } while (i <= 10);
    
}