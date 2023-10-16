#include <stdio.h>


int main() {
    int n, p;
    int result = 1;

    // Input values for n and p
    printf("Enter the base (n): ");
    scanf("%d", &n);

    printf("Enter the exponent (p): ");
    scanf("%d", &p);

    // Calculate n^p using a loop
    for (int i = 0; i < p; i++) {
        result *= n;
    }

    // Display the result
    printf("%d raised to the power of %d is %d\n", n, p, result);

    return 0;
}