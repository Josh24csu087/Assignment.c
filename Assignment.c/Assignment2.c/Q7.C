#include <stdio.h>

int main() {
    int marks[] = {50, 61, 70, 81, 90};
    int n = sizeof(marks) / sizeof(marks[0]);

    for(int i = 0; i < n; i++) {
        if(marks[i] % 2 == 0) {
            printf("Student %d's mark %d is Even\n", i+1, marks[i]);
        } else {
            printf("Student %d's mark %d is Odd\n", i+1, marks[i]);
        }
    }

    return 0;
}
