#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
int ara[]={1, 3, 7, 9, 12, 15};

int size=sizeof(ara)/sizeof(ara[0]);
bool sort=true;

for (int i = 0; i < size-1; i++)



{

    if(ara[i] >ara[i+1])
    {
        printf("The array is not sorted\n");
        sort=false;
        break;
        
    }

}
if(sort)
{
    printf("The array is sorted\n");
}
return 0;
}