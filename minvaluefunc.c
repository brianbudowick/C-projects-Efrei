#include <stdio.h>
#include <stdlib.h>

int minval(int,int);

int main()
{

    int n1;
    int n2;

    printf("Enter two integers\n");
    scanf("%d %d",&n1,&n2);
    minval(n1,n2);
   

    return 0;
}
int minval(int n1,int n2){
 if (n1 < n2)
        printf("The minimum between %d and %d is %d", n1, n2, n1);
    else if (n2 < n1)
        printf("The minimum between %d and %d is %d", n1, n2, n2);
    else
        printf("%d and %d are equals", n1, n2);
}