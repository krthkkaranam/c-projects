#include <stdio.h>

void main()
{
 int tel,hin,eng,mat,sci,total;
 float per;
 printf("Enter 5 subjects marks: ");
 scanf("%d%d%d%d%d",&tel,&hin,&eng,&mat,&sci);
if(tel==100&&hin==100&&eng==100&&mat==100&&sci==100){
 total=tel+hin+eng+mat+sci;
 per=total/5*100;
 printf("Total is:%d",total);
 printf("percantage is:%f",per);
 }
 else
 printf("max marks out of range");
 getch();
}
 
