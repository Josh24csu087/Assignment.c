#include <stdio.h>

int main() {
    int marks[] = {60, 99, 75, 99, 80};
    int n = sizeof(marks) / sizeof(marks[0]);

    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("First student who scored 99 is at index %d\n", i);
            break;  // Stop after finding the first "99"
        }
    }

    return 0;
}
