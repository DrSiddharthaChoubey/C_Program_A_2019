#include<stdio.h>
int main()
{
float bs,hra,da,gs;
printf("enter the salary of the employee");
scanf("%f",&bs);
if(bs<=10000)
{
hra=0.2*bs;
da=0.8*bs;
}
else if(bs<=20000)
{
hra=0,25*bs;
da=0.9*bs;
}
else
{
    hra=0.3*bs;
    da=0.95*bs;
}
gs=bs+hra+da;
printf("the gross salary is %f",gs);
return 0;
}
