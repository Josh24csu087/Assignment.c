#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int binaryToDecimal(int n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        decimal += remainder * pow(2, i);
        n /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int choice, num;

    printf("Enter your choice (1: Decimal to Binary, 2: Binary to Decimal): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary equivalent: ");
        decimalToBinary(num);
        printf("\n");
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
