// celsius to fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the temperature in celsius=");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("\n temperature in fahrenheit=%f",f);
    printf("\n temperature in centigrade=%f",c);
    return 0;
}
