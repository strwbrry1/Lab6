#include "stdio.h"
#include "math.h"
#include "Windows.h"

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int n;
    
    printf("Введите n ->");
    scanf_s("%d", &n);
    i = 1;
    do {
        printf("%d ", 2*i);
        i++;
    } while (i <= n);
    
}