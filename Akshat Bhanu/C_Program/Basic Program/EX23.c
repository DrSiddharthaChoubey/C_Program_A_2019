/*write a program to enter P,R,T and find compound interest.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,ci;
    printf("Enter value of P=");
    scanf("%f",&p);
     printf("Enter value of R=");
    scanf("%f",&r);
     printf("Enter value of T=");
    scanf("%f",&t);
    a=(1+r/100);
    ci=p*pow(a,t);
    printf("Compound Interest=%.2f",ci);
    return 0;
}
