#include <stdio.h>

int main() {
    // Define an integer array with 6 elements and fill it with values.
    int arr[6] = {10, 5, 8, 2, 15, 3};

    // Initialize a pointer to the first element of the array.
    int *ptr = &arr[0];

    // Initialize a variable to store the minimum element and set it to the first element.
    int min = *ptr;

    // Iterate through the array using the pointer.
    for (int i = 1; i < 6; i++) {
        // Compare the current element with the minimum value.
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    // Display the minimum element from the array.
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
