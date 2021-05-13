#include<stdio.h>
int main()
{
    int i, n=0;
    float x;
    for(i=1; i<=6; i++)
    {
     scanf("%f",&x);
     if(x>=0)
     n++;
    }
    printf("%d valores positivos\n", n);
    return 0;
}