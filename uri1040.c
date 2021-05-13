#include<stdio.h>
int main(void)
{
    float a,b,c,d,e;
    double Avg1,Avg2;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    Avg1 = ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %0.1lf\n", Avg1);
    if(Avg1 >= 7.0)
     printf("Aluno aprovado.\n");
    else if(Avg1 < 5.0)
     printf("Aluno reprovado.\n");
    else{
     printf("Aluno em exame.\n");
     scanf("%f",&e);
     printf("Nota do exame: %0.1f\n", e);
     Avg2 = (Avg1+e)/2;
        {
        if(Avg2 >= 5.0)
         printf("Aluno aprovado.\n");
        else
         printf("Aluno reprovado.\n");
        }
     printf("Media final: %0.1lf\n", Avg2);
    }
    return 0;
}
