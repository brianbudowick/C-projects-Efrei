#include<stdio.h>

int main(void)
{
    int matrix[2][4]={{2,4,6,8},{1,3,5,6}};
    int tab[8];
    int k=0;

    for (int i=0;i,2;i++)
    {
        for (int j=0;j<4;j++)
        {
            tab[k]=matrix[i][j];
            k++;
        }
    }
    for (int i=0;i<8;i++)
    printf("%d\n",tab[i]);

    return 0;
}
