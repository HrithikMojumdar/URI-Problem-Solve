#include<stdio.h>
int main()
{
    float a,x,y;
    scanf("%f", &a);
    if(a>=0 && a<=400)
    {
        x = (a*15)/100;
        y = x+a;
        printf("Novo salario: %0.2f\n", y);
        printf("Reajuste ganho: %0.2f\n", x);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>400 && a<=800)
    {
        x = (a*12)/100;
        y = x+a;
        printf("Novo salario: %0.2f\n", y);
        printf("Reajuste ganho: %0.2f\n", x);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>800 && a<=1200)
    {
        x = (a*10)/100;
        y = x+a;
        printf("Novo salario: %0.2f\n", y);
        printf("Reajuste ganho: %0.2f\n", x);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>1200 && a<=2000)
    {
        x = (a*7)/100;
        y = x+a;
        printf("Novo salario: %0.2f\n", y);
        printf("Reajuste ganho: %0.2f\n", x);
        printf("Em percentual: 7 %%\n");
    }
    else if(a>2000)
    {
        x = (a*4)/100;
        y = x+a;
        printf("Novo salario: %0.2f\n", y);
        printf("Reajuste ganho: %0.2f\n", x);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
