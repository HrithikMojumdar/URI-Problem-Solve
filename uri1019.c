#include<stdio.h>
int main(void)
{
    int N,h,m,s;
    scanf("%d", &N);
    h = N/3600;
    N = N%3600;
    m = N/60;
    s = N%60;
    printf("%d:%d:%d\n", h,m,s);
    return 0;
}
