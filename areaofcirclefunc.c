#include <stdio.h>
#include <math.h>

float circlearea(float r) {
        float area = (3.145 *(r*r));
    return area;
}

int main() {
    float r, area;

       printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    
        area = circlearea(r);
        printf("The area of the circle with radius %f is %f\n", r, area);
    

    return 0;
}
