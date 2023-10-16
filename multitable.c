#include <stdio.h>
#include<stdlib.h>
#include<math.h>


 

int main() {
    int a=9;
    int i=0;
    int b;
    while(i<10)
    {
        b=a*i;
        printf("%d x %d =%d\n",a,i,b);
        i++;
    }
    return 0;
    }