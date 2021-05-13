#include<stdio.h>
int main(void)
{
int num,wage;
double hours,result;
scanf("%d %d", &num, &wage);
scanf("%lf", &hours);
result=wage*hours;
printf("NUMBER = %d\n", num);
printf("SALARY = U$ %.2lf\n", result);
return 0;
}