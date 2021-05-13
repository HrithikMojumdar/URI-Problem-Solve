#include<stdio.h>
int main(void)
{
    int X,Y;
    double Total;
    scanf("%d %d", &X,&Y);
    if(X==1)
     printf("Total: R$ %0.2lf\n", 4.00*Y);
    else if(X==2)
     printf("Total: R$ %0.2lf\n", 4.50*Y);
    else if(X==3)
     printf("Total: R$ %0.2lf\n", 5.00*Y);
    else if(X==4)
     printf("Total: R$ %0.2lf\n", 2.00*Y);
    else
     printf("Total: R$ %0.2lf\n", 1.50*Y);
    return 0;
}