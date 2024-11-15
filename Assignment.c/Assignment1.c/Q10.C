#include <stdio.h>

void printPascalsTriangle(int rows) {
    int arr[rows][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                arr[i][j] = 1; 
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; 
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle with %d rows:\n", rows);
    printPascalsTriangle(rows);

    return 0;
}
