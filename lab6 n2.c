#include "stdio.h"
#include "math.h"
#include "Windows.h"

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int n = 1;

    /*printf("n = ");
    scanf_s("%d", &n);*/
    i = 0;
    do {
        printf("2^%d = %d\n", i, n);
        n *= 2;
        i++;
    } while (i <= 5);
    
}