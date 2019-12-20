/*write c program to enter base and height of a triangle and find its area.*/
#include<stdio.h>

int main()
{
int b,h,area;
printf("enter base and height of triangle");
scanf("%d%d",&b,&h);
area=(b*h)/2;
printf("area of  triangle%d ",area);
return 0;
}
