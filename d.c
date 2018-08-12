#include <stdio.h>

int main()
{
    int c,d,e;
    printf("c,d:");
    scanf("%d%d",&c,&d);
    e=c;
    c=d;
    d=e;
    printf("After swap c,d:%d,%d",c,d);
    return 0;
}
