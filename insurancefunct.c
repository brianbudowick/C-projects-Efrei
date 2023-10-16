#include<stdlib.h>
#include<stdio.h>

float deducta(float,float,float);

int main(){
    float damount;
    float deduct;
    float sdeduct;
  

    printf("enter the amount of damage in euros:");
    scanf("%f",&damount);
    deducta(deduct,sdeduct,damount);

   
    
    return 0;
    }
float deducta(float deduct,float sdeduct,float damount){
     sdeduct= (.1*damount);

    if (sdeduct <=10){
        deduct=10;
    }
    else if (sdeduct>=500){
        deduct=500;
    }
    else  deduct=sdeduct;
        
    printf ("Your deductible is %f euros.\n", deduct);
}
