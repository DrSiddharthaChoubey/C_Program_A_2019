/*temperature of a city in farhenheit degrees is input trough the keyboard. write a program to convert the temperature into centigrade dgrees*/
#include <stdio.h>
int main()
{
    float f ,c;
    printf("enter te temperature in farenheit");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("temperature in farenheit=%f\ntemperature in celsius=%f",f,c);
    return 0;

}
