/*
    The temperature of a city in F degrees is input through a keyboard. Write a program to convert the temperature in into C.
*/

#include<stdio.h>

int main()
{
    float tempInFeren, tempInCel;

    printf("Enter the temperature in F: ");
    scanf("%f", &tempInFeren);

    tempInCel = (tempInFeren - 32) * (5.0/9.0);

    printf("\nTemperature in fahrenheit: %.3f", tempInFeren);
    printf("\nTemperature in celsius: %.3f", tempInCel);

    return 0;
}
