#include "stdio.h"
#include "math.h"
#include "Windows.h"

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int n;
    int a = 0;
    int b = 1;
    int c = 0;
    
    printf("Первые N чисел Фибоначчи\n");
    printf("Введите N ->");
    scanf_s("%d", &n);

    i = 1;
    do {
        printf("%d ", a);
        c = a;
        a = b;
        b = b + c;
        i++;
    } while (i <= n);
    
}