/*write a c program to find the area of an equilateral triangle*/
#include<stdio.h>
#include<math.h>

int main()
{
int h,area;
printf("enterside of triangle");
scanf("%d",&h);
area=(sqrt(3)*h*h)/4;
printf("area of  triangle%d ",area);
return 0;
}
