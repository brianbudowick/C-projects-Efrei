#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n]; // Temporary array to store unique elements
    int index = 0; // Index for the temporary array

    // Traverse the original array
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
            // Check if the element is already in the temporary array
            if (arr[i] == temp[j]) {
                break;
            }
        }
        // If the element is not in the temporary array, add it
        if (j == index) {
            temp[index++] = arr[i];
        }
    }

    // Copy the unique elements back to the original array
    for (int i = 0; i < index; i++) {
        arr[i] = temp[i];
    }

    // Set the remaining elements to 0 (or any other default value)
    for (int i = index; i < n; i++) {
        arr[i] = 0; // You can change this to any appropriate default value
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
