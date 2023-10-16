#include <stdio.h>
#include<stdlib.h>

int caltime(int h, int m, int s) {
    int totsec = (h * 3600) + (m * 60) + s;
    return totsec;
}

int main() {
    int h, m, s;
    
   
    printf("Enter hours: minutes: seconds: ");
    scanf("%d %d %d", &h,&m,&s);
    
      int totsec = caltime(h, m, s);
    

    printf("Total time in seconds: %d\n", totsec);
    
    return 0;
}

