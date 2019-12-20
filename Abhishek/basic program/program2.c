/* The distance between two cities(in km) is input through the keyboard.
 Write a program to convert and print this distance in meter,feet,inches and centimeter*/
#include<stdio.h>
int main()
{
    float km,m,f,in,cm;
    printf("enter the distance between two cities=");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    in=cm/2.54;
    f=in/12;
    printf("\n in meter%f",m);
    printf("\n in feet%f",f);
    printf("\n in centimeter%f",cm);
    printf("\n in inches%f",in);
    return 0;

}
