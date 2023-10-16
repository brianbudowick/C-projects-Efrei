#include<stdio.h>
int main()
{
    int nb=-6;

    int abs;
    
    if (nb>=0){
        abs=nb;
    }else{
        abs=-nb;
    }

    printf("the absolute value of %d is %d",nb,abs);

    return 0;
}
