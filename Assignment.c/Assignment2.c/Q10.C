#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int marks[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(marks) / sizeof(marks[0]);
    int primeCount = 0;

    for(int i = 0; i < n; i++) {
        if(isPrime(marks[i])) {
            primeCount++;
        }
    }

    printf("Number of prime numbers in the array: %d\n", primeCount);
    return 0;
}
