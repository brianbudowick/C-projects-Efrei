#include<stdio.h>


int main()
{

const float PI=3.142;
float r1,r2, area1,area2;

printf("Enter values for r1 and r2:");
scanf("%f %f",&r1,&r2);

area1=r1*r1*PI;
area2=r2*r2*PI;

if (area1>area2)
{
    printf("The area of the overlap is %f\n",area1-area2);
}
else
{
    printf("the area of the overlap is %f\n",area2-area1);
}

return 0;
}