#include<stdio.h>
void main(){
   int bs,da,hra,gs;
    printf("bs:");
    scanf("%d",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("gs:%d",gs);
    getch();
}
