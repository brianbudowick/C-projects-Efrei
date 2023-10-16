#include<stdlib.h>
#include<stdio.h>


int main(){
   char ch;
   //ask user to input any character
   printf("type any single keyboard character:");
   scanf("%c",&ch);
  
   //create conditions to determine character type 
   if(ch >= 'A' && ch <= 'Z')
      printf("Upper Case Letter");
   else if(ch >= 'a' && ch <= 'z')
      printf("Lower Case letter");
   else if(ch >= '0' && ch <= '9')
      printf("Number");
   else
      printf("_");
   
   return 0;
}