#include<stdio.h>
double dia(double);
double circum(double);
double area(double);
int main()
{
double r,d,c,a;
printf("enter the radius of the circle");
scanf("%lf",&r);
d=dia(r);
c=circum(r);
a=area(r);
printf("the diameter of the circle is %lf",d);
printf("the circumference of the circle is %lf",c);
printf("the area of the circle is %lf",a);
return 0;
}
double dia(double r)
{
return(2*r);
}
double circum(double r)
{
return(2*3.14*r);
}
double area(double r)

{
return(3.14*r*r);
}
