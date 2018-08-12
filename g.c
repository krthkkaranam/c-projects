#include <stdio.h>

int main()
{
    int x,y,a,sum;
    printf("4 digit:");
    scanf("%d",&x);
    a=x/1000;
    y=x%10;
    sum=a+y;
printf("sum is:%d",sum);
    return 0;
}
