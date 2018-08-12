#include <stdio.h>
int main()
{
    int x,i,rev=0,y;
    printf("5 digit no:");
    scanf("%d",&x);
    for(i=1;i<=5;i++){
        y=x%10;
        rev=rev*10+y;
        x=x/10;
    }
    printf("Reversed no is:%d",rev);

    return 0;
}
