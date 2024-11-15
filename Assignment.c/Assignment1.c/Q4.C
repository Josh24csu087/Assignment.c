#include <stdio.h>

void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap3(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap4(int *a, int *b) {
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    
    swap1(&x, &y);
    printf("After swap1: x = %d, y = %d\n", x, y);

    swap2(&x, &y);
    printf("After swap2: x = %d, y = %d\n", x, y);

    swap3(&x, &y);
    printf("After swap3: x = %d, y = %d\n", x, y);

    swap4(&x, &y);
    printf("After swap4: x = %d, y = %d\n", x, y);

    return 0;
}
