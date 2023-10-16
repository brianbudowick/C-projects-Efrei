#include<stdlib.h>
#include<stdio.h>

int main() 
{
 
    float grades[]={90.0,85.5,95.5,91.0};
    float high=0.0,low=1000.0,sum =0,ave;
    int size=sizeof(grades)/sizeof(grades[0]);
    
    for(int i=0;i<=3;i++){
        if (high<grades[i]){
            high=grades[i];
            }
        
        
        if (low>grades[i]){
            low=grades[i];
            }
        sum+=grades[i];
        ave=sum/size;
        }
      
    
    printf("high %f  low %f\n",high,low);
    printf("Average score%f\n",ave);
    
return 0;
}

printf("number of digits %d\n",digits)