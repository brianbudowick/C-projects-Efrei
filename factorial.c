#include <stdio.h>

int factfun(int,int,int);

int main() {
    int n;
    int factorial;
    int i;
      
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factfun(n,factorial,i);
  
    return 0;
}

int factfun(int n, int factorial,int i){
    
  for (int i = 1; i < n; ++i)
     {
            factorial = (i*n);
        }
   
        printf("Factorial of %d = %d\n", n, factorial);
}   
