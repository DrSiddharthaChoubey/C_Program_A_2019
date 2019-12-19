/*write a c program to convert days into years,week and days.*/
#include<stdio.h>
int main()
{
int n,y, w;
printf("enter total no. of days");
scanf ("%d",&n);
y=n/365;
n=n%365;
w=n/7;
n=n%7;
printf("no. of years%d",y);
printf("no. of weeks%d",w);
printf("no. of days%d",n);
return 0;
}
