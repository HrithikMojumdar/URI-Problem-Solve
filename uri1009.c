#include<stdio.h>
int main(void){

    char name[50];
    double salary,bonus,extra,total;
    scanf("%s", &name);
    scanf("%lf %lf", &salary, &bonus);

    extra=(bonus*15)/100;
    total=salary+extra;

    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}