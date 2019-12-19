/*Ramesh's  basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary .Write a program to calculate his gross salary.*/

 #include <stdio.h>
 #include <conio.h>
int main()
{
float da,hra,bs, gs;
printf("enter basic salary of ramesh");
scanf("%f",&bs);
da=bs*40/100;
hra=bs*20/100;
gs=bs+da+hra;
printf("basic salary =%f\ndearness allowance=%f\nhouse rent allowance=%f\ngross salary=%f",bs,da,hra,gs);
return 0;
}
