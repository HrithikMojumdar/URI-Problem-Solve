#include<stdio.h>
int main()
{
    int i,N,a;
    scanf("%d", &N);
    for(i=1; i<=10; i++)
    {
     a= i*N;
     printf("%d x %d = %d\n", i,N,a);
    }
    return 0;
}