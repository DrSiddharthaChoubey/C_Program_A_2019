/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature in centigrade degrees.*/
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in Fahrenheit=");
    scanf("%f",&f);

    c=5.0/9.08*(f-32);
    printf("\nTemperature in fahrenheit=%9.2f",f);
    printf("\nTemperature in centigrade=%9.2f",c);

    return 0;
}
