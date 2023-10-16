#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Position;

float distance(Position p1, Position p2) {
    float ptx = p1.x - p2.x;
    float pty = p1.y - p2.y;
    return sqrt(ptx * ptx + pty * pty);
}

Position* closest_positions(Position* positions, int array_size, Position query, float maximum_distance, int* result_size) {
    Position* result;
    *result_size = 0;

    for (int i = 0; i < array_size; i++) {
        float dist = distance(positions[i], query);
        if (dist <= maximum_distance) {
           (*result_size)++;
            result = (Position*)realloc(result, (*result_size) * sizeof(Position));
           
            }
            result[*result_size - 1] = positions[i];
        }
         return result;
    }

   


int main() {
    Position positions[] = {
        {1.0, 2.0},
        {3.0, 4.0},
        {5.0, 6.0},
        {7.0, 8.0}
    };
    int array_size = sizeof(positions) / sizeof(positions[0]);

    Position query = {4.0, 5.0};
    float maximum_distance = 2.0;

    int result_size;
    Position* result = closest_positions(positions, array_size, query, maximum_distance, &result_size);

    for (int i = 0; i < result_size; i++) {
        printf("Closest position %d: (%f, %f)\n", i, result[i].x, result[i].y);
    }

    
    return 0;
}
