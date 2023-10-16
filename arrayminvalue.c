#include<stdio.h>
#include <stdbool.h>
#include<math.h>


int main() {
    int tab[] = {1, 3, 5, 7, 9};
    int n = sizeof(tab) / sizeof(tab[0]); 
    int min = tab[0]; 

 
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i]; 
        }
    }

 
    printf("The minimum value is: %d\n", min);

    return 0;
}
