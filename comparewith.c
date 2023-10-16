#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;
    char sign;
   

    printf("Please enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("Please enter your operation: (+, -, /, *):");
    scanf(" %c",&sign);

    switch (sign)
    {
        case'+':
            printf("%d + %d = %d\n",x, y, x+y);
            break;

        case'-':
             printf("%d - %d = %d\n",x ,y ,x-y);
             break;
        
        case'/':
             printf("%d/%d = %d\n",x, y, x/y);
             break;
        
        case'*':
             printf("%d*%d = %d\n",x, y, x*y);
             break;

        default:
            printf("go back and enter your values properly");

    return 0;
    }
}