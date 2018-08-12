#include <stdio.h>
int main()
{
    int x,i,sum=0,y,a;
    printf("A 5digit no:");
    scanf("%f",&x);
    for(i=1;i<=5;i++)
    {
        y=x/10;
        a=x%10;
        sum=sum+a;
    }
    printf("sum of digits is:%d",sum);
    return 0;
}

