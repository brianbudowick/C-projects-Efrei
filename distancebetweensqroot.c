#include<stdlib.h>
#include<stdio.h>
#include<math.h>

typedef struct{
    float x;
    float y;
}Position;

float distance(Position p1,Position p2){
    float ptx = p1.x - p2.x;
    float pty = p1.y - p2.y;
    return sqrt(ptx * ptx + pty * pty);
}
int main() {
    Position p1 = {0.0, 5.0};
    Position p2 = {5.0, 5.0};

    float dist = distance(p1, p2);

    printf("The distance is %f\n",dist);

    return 0;
}

