#include<stdlib.h>
#include<stdio.h>

int sum(int n);

int main(){
    int n=24;
    printf("The sum is %d\n",sum(n));
    return 0;
}

int sum(int n)
{
    int result;
    if(n==1)
    {
        result=1;
    }
    else 
    {
        result=n+sum(n-1);
    }
    return result;
}