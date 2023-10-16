#include<stdio.h>
#include<stdlib.h>

int main (){
    char tab[]={'G','R','E','E','N'};
     int n = sizeof(tab) / sizeof(tab[0]);

    for (int i=0;i<=n;i++){
        printf("%c",tab[i]);
    }
    return 0;
}