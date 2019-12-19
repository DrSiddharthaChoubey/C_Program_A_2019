/*Ramesh' basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent
  allowance is 20% of basic salary. write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("Enter basic salary of ramesh=");
    scanf("%f",&bs);

    da=.4*bs;
    hra=.2*bs;
    gs=bs+da+hra;

    printf("Basic Salary=%9.2f\n",bs);
    printf("DA=%9.2f\n",da);
    printf("HRA=%9.2f\n",hra);
    printf("Gross Salary=%9.2f\n",gs);

    return 0;
}
