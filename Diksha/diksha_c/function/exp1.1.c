#include<stdio.h>
double cube(double);
int main()
{
;
double a,c;
printf("enter the number");
scanf("%lf",&a);
c=cube(a);
printf("the cube of %lf is %lf",a,c);
return 0;
}
double cube(double a)
{

double c;

c=a*a*a;
return(c);
}
