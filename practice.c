#include <stdio.h>
#include <string.h>
/*int maximum(int n1, int n2){
    
    if (n1 > n2){
        return n1;
    }
    return n2;
}


int main(){
    int v1=6;
    int v2=9;
    int v3;  
    
    
    v3=maximum(v1,v2);
    
    printf("v3 equals %d\n",v3);
    
    return 0;*/

    float average_two_number(float n1, float n2){
    
    float ave=((n1+n2)/2);
    
    return ave;
    
}


int main(){
    float v1=11;
    float v2=34;
    float v3;
    
    v3=average_two_number(v1,v2);
    
    printf("The average of %d and %d is %f\n",v1,v2,v3);
    
    return 0;
    //it is like a main for testing !
    
}

    

