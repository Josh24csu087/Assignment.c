#include <stdio.h>

int main() {
    int marks[] = {50, 60, 70, 80, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    int max = marks[0], min = marks[0];

    for(int i = 1; i < n; i++) {
        if(marks[i] > max) max = marks[i];
        if(marks[i] < min) min = marks[i];
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
