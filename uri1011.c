#include<stdio.h>
int main(void)
{
    int R;
    double pi=3.14159,VOLUME;
    scanf("%d", &R);
    VOLUME=(4.0/3.0)*pi*R*R*R;
    printf("VOLUME = %0.3lf\n", VOLUME);

    return 0;
}
