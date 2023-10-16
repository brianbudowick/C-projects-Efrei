#include<stdio.h>
#include<stdlib.h>

 

int factorielRecursif(int pNb)

{

    if (pNb == 1){

        return 1;

    }

    else{

        return pNb * factorielRecursif(pNb - 1);

    }

}

 

 

int main(){

 

    int factorial = factorielRecursif(5);

    printf("%d", factorial);

    return 0;

}

 