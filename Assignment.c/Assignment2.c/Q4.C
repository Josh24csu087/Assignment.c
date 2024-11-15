#include <stdio.h>

int main() {
    int marks[] = {99, 75, 99, 60, 99};
    int n = sizeof(marks) / sizeof(marks[0]);
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            count++;
            printf("Student %d scored 99\n", i+1);
        }
    }

    printf("Total number of students who scored 99: %d\n", count);
    return 0;
}
