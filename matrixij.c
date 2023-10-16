#include <stdio.h>

void int2D(int tab[][arr], int rows, int cols); 

{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tab[i][j] = i + j;
        }
    }
}

int main() {
   
    int rows = 3;  
    int cols = 4;  
    int n = sizeof(arr) / sizeof(arr[0]);

    int tab[rows][cols];

 
    int2D(tab, rows, cols);

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
