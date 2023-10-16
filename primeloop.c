#include <stdio.h>

int main() {
    int num;
    int prime = 1; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0; 
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 0; 
                break;      
            }
        }
    }

    if (prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
