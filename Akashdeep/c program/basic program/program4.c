#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the temperature in fahrenheit=");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("\n temperature in fahrenheit=%f",f);
    printf("\n temperature in centigrade=%f",c);
    return 0;
}
