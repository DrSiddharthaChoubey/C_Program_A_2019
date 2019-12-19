/*Write a program to convert celsius to fahrenheit*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celsius=");
    scanf("%f",&c);
    f=9/5*c+32;
    printf("temperature in fahrenheit=%9.2f",f);
    return 0;
}
