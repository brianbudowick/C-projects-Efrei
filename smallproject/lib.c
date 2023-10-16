#include "header.h"
#include <stdio.h>

int func(float x, float y);

int main(){
    float x=7.0;
    float y=9.0;
    Point p1;
  
    
    func(x,y);        
    
    printf("Value of x is %f\n",p1.x);
    printf("Value of y is %f\n",p1.y);
     
        
    return 0;

}

int func(float x, float y){
    Point p1;
    Point* point_pointer=&p1;
    point_pointer-> x;
    point_pointer-> y;
    return p1.x,p1.y;
 
}