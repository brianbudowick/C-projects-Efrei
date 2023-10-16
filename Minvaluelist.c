#include <stdio.h>
#include<stdlib.h>



int main() 
{int num1,num2,minimum;
       
    //Ask for number inputs
    printf("Enter any two whole numbers: ");
    scanf("%d""%d", &num1,&num2);
    
   //use min function to determine lowest value of inputs
    minimum = __min(num1, num2);
    
       printf("Minimum = %d", minimum);
    
    return 0;
}
