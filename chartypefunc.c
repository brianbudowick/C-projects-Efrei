#include<stdlib.h>
#include<stdio.h>

void chartype(char);

int main(){
   char ch;
   
   printf("type any single keyboard character:");
   scanf("%c",&ch);
   chartype(ch);
  

   
   return 0;
}

  void chartype(char ch){
   if(ch >= 'A' && ch <= 'Z')
      printf("Upper Case Letter");
   else if(ch >= 'a' && ch <= 'z')
      printf("Lower Case letter");
   else if(ch >= '0' && ch <= '9')
      printf("Number");
   else
      printf("_");
  }