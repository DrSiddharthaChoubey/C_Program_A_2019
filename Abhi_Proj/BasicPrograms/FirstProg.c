/*
    Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of the basic salary, and house rent allowance is 20% of basic salary.
    write a program to calculate his gross salary.
*/

#include<stdio.h>

int main()
{
    float basicSalary, dearnessAllowance, HRA, grossSalary;

    printf("Enter Basic Salary of Ramesh: ");
    scanf("%f", &basicSalary);

    dearnessAllowance = basicSalary*0.40;
    HRA = basicSalary*0.20;

    grossSalary = basicSalary + dearnessAllowance + HRA;

    printf("\nBasic Salary of Ramesh is: %.4f\n", basicSalary);
    printf("Dearness Allowance of Ramesh is: %.4f\n", dearnessAllowance);
    printf("HRA of Ramesh is: %.4f\n", HRA);
    printf("Gross Salary of Ramesh is: %.4f\n", grossSalary);

    return 0;
}

