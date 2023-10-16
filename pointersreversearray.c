#include<stdio.h>
void displayArray(int *arr, int size);

int main()
{

    int arr[] = {10, 20, 30, 40, 15};
 //   int *ptr = arr;
 
    int size = sizeof(arr) / sizeof(int);
    
    displayArray(arr, size);

    /* for (int i = 0; i < size;i++){

         printf("%d ", *ptr);
         ptr++;
     }*/
     return 0;
    }

    void displayArray(int *arr, int size)
    { int *ptr=&arr[(size-1)];
         
        
        for (int i = (size-1); i>=0; i--)
        {
           printf("%d", *ptr--);
            
           // printf("%d ", *(arr-i));

            //printf("%d ", arr[i]);
        }
    }
