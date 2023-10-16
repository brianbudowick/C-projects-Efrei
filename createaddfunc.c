#include<stdio.h>

int add(int a,int b){
     return a+b ;
}
 
int main() {
     int a=7;
    int b=8;
    int sum=add(a,b);


 printf("The sum of a and b is: %d\n",sum);

 return 0;
}