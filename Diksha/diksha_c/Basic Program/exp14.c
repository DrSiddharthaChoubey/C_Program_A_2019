/*write a C  program to enter temperature in celsius and convert it into farenheit.*/
#include<stdio.h>

int main()
{
float c,f;
printf("enter the temperature in celsius");
scanf("%f",&c);
f=9/5*c+32;
printf(" the temperature in celsius%f",c);
printf(" the temperature in farenheit%f",f);
return 0;
}
