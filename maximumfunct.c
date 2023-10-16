#include<stdio.h>
#include<stdlib.h>

int maxval(int,int,int,int);

int main(){

int n1, n2,n3,max;

printf("Type three integers\n");
scanf("%d %d %d",&n1,&n2,&n3);
maxval(n1,n2,n3,max);




return 0;
}

int maxval(int n1, int n2, int n3,int max){
    if(n1>=n2)max=n1;
else max=n2;

if(max>=n3)printf("the maximum is: %d",max);
else printf("the maximum is: %d", n3);
}