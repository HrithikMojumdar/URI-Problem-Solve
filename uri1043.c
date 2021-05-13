#include<stdio.h>
int main(void)
{
    float a,b,c,p,area;
    scanf("%f %f %f", &a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
     {
      p = a+b+c;
      printf("Perimetro = %0.1f\n", p);
     }
    else
     {
      area = ((a+b)/2)*c;
      printf("Area = %0.1f\n", area);
     }

    return 0;
}