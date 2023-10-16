#include<stdlib.h>
#include<stdio.h>

int main(){

    float money=100000;
    float tax;

    if (money<=10000)
    {
        tax=0;
    }

    else if (money>10000 && money<=30000)
    {
        tax=((money-10000)*0.1);
    }
    else if (money >30000 && money<=60000)
    {   
        tax=(2000+(money-30000)*0.3);
    }

    else if (money >60000)
    {
        tax=(2000+9000+(money-60000)*0.5);
    }
    printf("Your taxes are %g",tax);

    return 0;
}
    

    

