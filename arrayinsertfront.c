#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[]={1,2,3,4,5};
    int nn=4;

    int ar=sizeof(array)/sizeof(array[0]);

    int array1[ar+1];

    for (int i=0;i<ar;i++)
        array1[i+1]=array[i];

        array1[0]=nn;

    for (int i=0;i<=ar;i++)
    printf("%d\n", array1[i]);

    return 0;

}
