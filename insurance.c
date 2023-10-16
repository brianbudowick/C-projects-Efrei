#include<stdlib.h>
#include<stdio.h>

int main(){
    float damount;
    float deduct;

    printf("enter the amount of damage in euros:");
    scanf("%f",&damount);

    float sdeduct= (.1*damount);

    if (sdeduct <=10){
        deduct=10;
    }
    else if (sdeduct>=500){
        deduct=500;
    }
    else  deduct=sdeduct;
        
    printf ("Your deductible is %f euros.\n", deduct);
    
    return 0;
    }

