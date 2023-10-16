#include<stdio.h>
#include<stdlib.h>

void recurfuncdec(int pNb){
    if(pNb==0){
        return;
    }
    else{
        printf("%d\n",pNb);
        recurfuncdec(pNb-1);
    }
}
int main(){
    recurfuncdec(6);

    return 0;
}