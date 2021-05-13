#include<stdio.h>
int main(void)
{
    int t,v,d;
    double fuel;
    scanf("%d %d", &t, &v);
    d = t*v;
    fuel = d/12.0;
    printf("%0.3lf\n", fuel);
    return 0;
}
