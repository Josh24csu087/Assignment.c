#include <stdio.h>

int main() {
    int marks[] = {50, 60, 70, 80, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }

    float average = (float)sum / n;
    printf("Average score: %.2f\n", average);

    return 0;
}
