#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int multitable(int);
 

int main(){

    int pNb;

    printf("Enter an integer below 10\n");
    scanf("%d",&pNb);
    multitable(pNb);

   
    
    return 0;
}
int multitable(int pNb){
 for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n", pNb, i, pNb * i);
    }
}