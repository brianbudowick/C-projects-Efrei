#include <stdio.h>
#include<stdlib.h>

int recperi(int l, int w) {
      int perimeter = 2 * (l + w);
    return perimeter;
}

int main() {
    int l, w;

    printf(" First enter the length of the rectangle and then the width: ");
    scanf("%d %d", &l,&w);
   
    int perimeter = recperi(l, w);

    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}

