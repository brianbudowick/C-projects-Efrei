#include<stdio.h>
#include<stdbool.h>

int main()
{
    int ara[]={10, 22, 33, 44, 55, 66, 77};
    int n=(sizeof(ara)/sizeof(ara[0]));
    bool lokup=false;
    int position;
    int a=69;
   
   
for(int i=0;i<n;i++)

if(ara[i]==a)
{
    position=i;
    lokup=true;
    break;
}
if(lokup)
{
    printf("The number is at array position %d\n",position);
    
}
else

    printf("you screwed up (-1) points for you\n");

return 0;
}