#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    int freq[100000] = {0};  
    
    
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    int foundDuplicate = 0;

    for(int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;  
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("-1\n");
    }

    return 0;
}
