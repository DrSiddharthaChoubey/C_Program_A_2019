/*in a company an employee is paid as under .if his basic salary is less than rs. 1500 hra=10%of basic salary and da is 90 % of basic salary.
if his salary iseither equal to or above 1500 then hra =500 and da is 98% of the basic salary .if the employee's salary is takenvas input
through the keyboard write a program to write his gross salary.*/
#include<stdio.h>
int main()
{
float bs,hra,da,gs;
printf("enter the salary of the employee");
scanf("%f",&bs);
if(bs<1500)
{
hra=0.1*bs;
da=0.9*bs;
}
else
{
hra=500;
da=0.98*bs;
}
gs=bs+hra+da;
printf("the gross salary is %f",gs);
return 0;
}
