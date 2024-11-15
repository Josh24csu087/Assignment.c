#include <stdio.h>

int main() {
    int marks[] = {85, 72, 50, 95, 60};
    int n = sizeof(marks) / sizeof(marks[0]);

    for(int i = 0; i < n; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: A Grade\n", i+1);
        } else if (marks[i] >= 60) {
            printf("Student %d: B Grade\n", i+1);
        } else if (marks[i] >= 40) {
            printf("Student %d: C Grade\n", i+1);
        } else {
            printf("Student %d: D Grade\n", i+1);
        }
    }

    return 0;
}
