#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {
    int arry1[] = {1, 2, 3,4,5,6,7};
    int arry2[] = {8, 9, 10};
    int s1 = sizeof(arry1) / sizeof(arry1[0]);
    int s2 = sizeof(arry2) / sizeof(arry2[0]);
    
    int s3 = s1 + s2;
    
    int arry3[s3];
    

    for (int i = 0; i < s1; i++) {
        arry3[i] = arry1[i];
    }
    
  
    for (int i = 0; i < s2; i++) {
        arry3[s1 + i] = arry2[i];
    }
    
 
    printf("New Array: ");
    for (int i = 0; i < s3; i++) {
        printf("%d ", arry3[i]);
    }
    
    return 0;
}
