/* The length and breadth of rectangle and radius of circle are input through the keyboard. Write the program to calculate the area and peri
meter of rectangle,the area and circumference of the circle.*/
#include <stdio.h>
int main()
{
int l,b,r,a,peri,ac,c;
printf(" enter the length and breadth and radius of rectangle and circle respectively");
scanf("%d%d%d",&l,&b,&r);
peri=2*(l+b);
a=l*b;
ac=3.14*r*r;
c=2*3.14*r;
printf("the area of rectangle is=%d\nthe perimeter of rectangle is=%d\nthe area of circle is=%d\n the circumference of the circle is=%d",a,peri,ac,c);
return 0;
}
