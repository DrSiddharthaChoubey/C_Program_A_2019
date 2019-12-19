/*The distance between two cities(in km) is input through keyboard. Write a program to convert and print the distance in meters,
feet,inches and centimeters.*/
#include<stdio.h>
int main()
{
    float km,m,f,in,cm;
    printf("Enter distance(in km)=");
    scanf("%f",&km);

    m=1000*km;
    f=3280.84*km;
    in=39370.1*km;
    cm=100000*km;

    printf("\nDistance(in meter)=%9.2f",m);
    printf("\nDistance(in feet)=%9.2f",f);
    printf("\nDistance(in inches)=%9.2f",in);
    printf("\nDistance(in centi meters)=%9.2f",cm);

     return 0;

}

