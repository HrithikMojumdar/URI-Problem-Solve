#include<stdio.h>
int main()
{
    int x,i,a;
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        scanf("%d", &a);
        if(a==0)
         printf("NULL\n");
        else if(a%2==0 && a>0)
          printf("EVEN POSITIVE\n");
        else if(a%2!=0 && a>0)
          printf("ODD POSITIVE\n");
        else if(a%2==0 && a<0)
          printf("EVEN NEGATIVE\n");
        else
          printf("ODD NEGATIVE\n");
    }
    return 0;
}
