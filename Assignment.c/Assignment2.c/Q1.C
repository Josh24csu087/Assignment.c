#include <stdio.h>

int main() {
    int marks[] = {50, 60, 70, 80, 90};
    int n = sizeof(marks) / sizeof(marks[0]);

    printf("Original Marks: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }

    // Increase each student's mark by 5
    for(int i = 0; i < n; i++) {
        marks[i] += 5;
    }

    printf("\nUpdated Marks: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}
