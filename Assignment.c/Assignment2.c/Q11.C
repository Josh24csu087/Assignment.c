#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;  

    
    printf("Array before insert at front: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    for (int i = n; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0; 
    n++;

    printf("Array after insert at front: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
