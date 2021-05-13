#include<stdio.h>
int main()
{
    int i,N;
    float a,b,c,x;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        x= (a*2)+(b*3)+(c*5);
        printf("%0.1f\n", x/10);
    }
    return 0;
}
