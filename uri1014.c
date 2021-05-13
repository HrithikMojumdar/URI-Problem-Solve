#include<stdio.h>
int main(void)
{
    int X;
    double Y, Fuel;
    scanf("%d %lf", &X, &Y);

    Fuel= X/Y;
    printf("%0.3lf km/l\n", Fuel);

    return 0;
}