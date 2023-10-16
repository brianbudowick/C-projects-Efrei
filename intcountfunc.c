#include <stdio.h>
#include <ctype.h>

int Digits(char *str) {
    int digit = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            digit++;
        }
    }

    return digit;
}

int main() {
    char str[] = "My birthday is on the 27th";
    int digit = Digits(str);

    printf("Number of digits: %d\n", digit);

    return 0;
}
