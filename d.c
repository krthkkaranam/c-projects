#include <stdio.h>
#define pi 3.14
int main()
{
    float length,breadth,radius,area1,area2,peri1,peri2;
    printf("Enter the length and breadth of recantangle:\n");
    scanf("%f%f",&length,&breadth);
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radius);
    area1=length*breadth;
    area2=pi*pow(radius,2);
    peri1=2*(length+breadth);
    peri2=2*pi*radius;
    printf("area of rectangle,circle is %.2f,%.2f sq units \nperimeter of rectangle and circle is %.2f,%.2f",area1,area2,peri1,peri2);
    return 0;
}
