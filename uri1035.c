#include<stdio.h>
int main(void)
{
    int A,B,C,D,X,Y;
    scanf("%d %d %d %d", &A,&B,&C,&D);
    X = A+B;
    Y = C+D;
    if(B>C && D>C && Y>X && C>0 && D>0 && A%2==0)
      printf("Valores aceitos\n");
    else
      printf("Valores nao aceitos\n");
    return 0;
}