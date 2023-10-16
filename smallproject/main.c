#include "header.h"
#include <stdio.h>

int func(int x);

int main(){
    
    Point p1;
    Point* point_pointer=&p1;
    
        point_pointer-> x=6.6;
        point_pointer-> y=9.9;
        
        printf("Value of x is %f\n",p1.x);
        printf("Value of y is %f\n",p1.y);
        printf("Value of point_pointer x is %f\n",point_pointer->x);
        printf("Value of point_pointer y is %f\n",point_pointer->y);
        
    return 0;

}


int func(int x){
    Point p1;
    Point* point_pointer=&p1;
}