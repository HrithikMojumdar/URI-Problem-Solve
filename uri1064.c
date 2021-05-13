#include<stdio.h>
int main()
{
    int i, count=0;
    float x, c=0, Avg;
    for(i=1; i<=6; i++)
    {
     scanf("%f", &x);
     if(x>=0)
     {
      count++;
      c=c+x;
     }
    }
    printf("%d valores positivos\n", count);
    Avg = c/count;
    printf("%0.1f\n", Avg);
    return 0;
}