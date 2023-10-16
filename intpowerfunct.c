#include <stdio.h>


int power(int n, int p) {
    if (p == 0) {
        return 1;
    } else if (p % 2 == 0) {
        int temp = power(n, p / 2);
        return temp * temp;
    } else {
        return n * power(n, p - 1);
    }
}

int main() {
    int n, p;
    
    printf("Enter the base (n): ");
    scanf("%d", &n);
    
    printf("Enter the exponent (p): ");
    scanf("%d", &p);
    
    if (p < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        int result = power(n, p);
        printf("%d raised to the power of %d is %d\n", n, p, result);
    }
    
    return 0;
}
