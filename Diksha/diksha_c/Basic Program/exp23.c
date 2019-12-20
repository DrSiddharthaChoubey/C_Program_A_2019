/*write a C program to input p,t,r and calculate compound interest.*/
#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,ci;
printf("enter principal rate and time");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow(1+r/100,t);
printf("compound interest is%f ",ci);
return 0;
}
