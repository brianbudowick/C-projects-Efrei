#include<stdio.h>
#include<stdlib.h>

int compareint(int, int, char);

int main(){
    int x,y;
    char sign;
   

    printf("Please enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("Please enter your operation: (+, -, /, *):");
    scanf(" %c",&sign);
    
    compareint(x,y,sign);

    

    return 0;
    }
int compareint(int x, int y, char sign){
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
    }
    }