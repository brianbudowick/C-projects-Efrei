#include<stdio.h>
#include<stdlib.h>

void recurfuncasc(int n);
   
int main(){
    int n=5;
    recurfuncasc(n);
    
   

    return 0;
}

void recurfuncasc(int n){
    if(n==0){
        return;
    }
    else 
    {
        recurfuncasc(n-1);
        printf("%d",n);
    }
}
