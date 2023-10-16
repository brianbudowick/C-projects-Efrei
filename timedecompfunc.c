#include <stdio.h>
#include<stdlib.h>

void tottime(int s) {
    int h, m;

    h= s/3600;
    m= (s%3600)/60;
    s= s-h*3600-m*60;
     
 
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", h, m, s);
}

int main() {
    int timesec;

    // Input the time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &timesec);

    // Call the function to print time components
    tottime(timesec);

    return 0;
}

