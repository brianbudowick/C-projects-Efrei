#include<stdlib.h>
#include<stdio.h>


int main(){
   int scr1,scr2,scr3,ave;
  
   //ask user to input their scores
   printf("input your scores:");
   scanf("%i""%i""%i",&scr1,&scr2,&scr3);
  
  ave=((scr1+scr2+scr3)/3);
   //create conditions to determine output message 
   if(ave <= 10)
      printf("Fail");
    else if(ave = 12 && ave < 14)
      printf("Fairly good");
    else if(ave = 14 && ave <16)
      printf("Good");
    else if(ave >17 && ave<=20)
      printf("Very good");
   else
      printf("_");
   
   return 0;
}