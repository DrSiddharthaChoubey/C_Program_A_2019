/*write a C program to enter two angles of a triangle and find the third angle.*/
#include<stdio.h>

int main()
{
int a,b,c;
printf("enter two angles of triangle");
scanf("%d%d",&a,&b);
c=180-(a+b);
printf("third angles of triangle%d ",c);
return 0;
}
