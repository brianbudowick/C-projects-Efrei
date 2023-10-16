#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n]; 
    int index = 0; 

    // Traverse the original array
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
                      if (arr[i] == temp[j]) {
                break;
            }
        }
           if (j == index) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < index; i++) {
        arr[i] = temp[i];
    }

    for (int i = index; i < n; i++) {
        arr[i] = 0; 
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("First Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, n);

    printf("Deduped Array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}