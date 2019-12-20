/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
write a program to calculate his gross salary.*/

#include<stdio.h>
int main()
{
    float bs,da,hra,gross;
    printf("enter the basic salary=\n");
    scanf("%f",&bs);
    da=bs*0.40;
    hra=bs*0.20;
    gross=bs+da+hra;
    printf(" \nbasic salary=%f",bs);
    printf(" \ndearness allowance=%f",da);
    printf(" \nhouse rent allowance=%f",hra);
    printf(" \ngross salary=%f",gross);
    return 0;
}
