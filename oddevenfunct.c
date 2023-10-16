#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int oddeven(int number);

int main(){
   int number;
       
    printf("Enter a number: ");
    scanf("%d", &number);
    oddeven(number);

    
    return 0;
}
int oddeven(int number){        

    if(number % 2 == 0)
        printf("%d is even.", number);
    
    
    else
        printf("%d is odd.", number);
}
    