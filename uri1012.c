#include<stdio.h>
int main(void)
{
    double pi=3.14159,A,B,C,TRI,CIR,TRA,QUA,RET;
    scanf("%lf %lf %lf", &A,&B,&C);

    TRI = 0.5*A*C;
    CIR = pi*C*C;
    TRA = (A+B)/2*C;
    QUA = B*B;
    RET = A*B;

    printf("TRIANGULO: %0.3lf\n",TRI);
    printf("CIRCULO: %0.3lf\n",CIR);
    printf("TRAPEZIO: %0.3lf\n",TRA);
    printf("QUADRADO: %0.3lf\n",QUA);
    printf("RETANGULO: %0.3lf\n",RET);

    return 0;
}