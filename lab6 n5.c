#include "stdio.h"
#include "math.h"
#include "Windows.h"

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int n;
    int a;
    
    printf("Введите n ->");
    scanf_s("%d", &n);
    printf("Введите a ->");
    scanf_s("%d", &a);

    i = 1;
    do {
        printf("%d ", a*i);
        i++;
    } while (i <= n);
    
}