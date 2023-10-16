#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main() 
{int num1,num2,num3,num4,maximum;

       
    //Ask for number inputs
    printf("Enter any two whole numbers: ");
    scanf("%d""%d""%d""%d", &num1,&num2,&num3,&num4);
    
   //use min function to determine highest value of inputs
    maximum = fmax(num1,num2,num3,num4);
    
       printf("Maximum= %d", maximum);
    
    return 0;
}
