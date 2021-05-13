#include<stdio.h>
#include<math.h>
int main(void)
{
    double x1,y1,x2,y2,x,y,result,Distance;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x= x2-x1;
    y= y2-y1;

    result=(x*x)+(y*y);
    Distance = sqrt(result);
    printf("%0.4lf\n", Distance);

    return 0;
}