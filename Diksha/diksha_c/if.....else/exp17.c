/* write a program in C to check whether a year is a leap year or not.*/
#include<stdio.h>
int main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%100==0&&y%400==0)
printf("it is a leap year");
else if(y%4==0)
printf("it is a leap year");
else
printf("it is not a leap year");
return 0;
}
