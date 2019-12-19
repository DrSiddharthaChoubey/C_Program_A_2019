#include<stdio.h>
int main()
{
float l,b,p,a;
printf("enter the  length and breadth");
scanf("%f%f",&l,&b);
p=2*(l+b);
a=l*b;
if(a>p)
printf("the area is grater than its perimeter");
else
printf("the perimeter is greater than its area");

return 0;
}
