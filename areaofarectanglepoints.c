#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(){
    float y1,y2,x1,x2,length,width,area;

    printf("calculate the area of a rectangle using xy coordinates of corner points \n");
    printf("First enter the x and then the y of point 1:""");
    scanf("%f %f",&x1,&y1);
    printf("Now enter the x and y of point two, starting with x and then y:""");
    scanf("%f %f",&x2,&y2);

    length=x1-x2;
    width=y1-y2;
  

    if(length <=0)
    {
        length=-1*length;
    }
    if (width<=0)
    {
        width=-1*width;
    }

    printf("The lenght of the rectangle is: %f The width of the rectangle is: %f\n",length,width);
    
    area=length*width;  
    
    printf("The area of the rectangle made up of points x1 y1 and x2 y2 is: %f\n",area);

    return 0;
    }
    