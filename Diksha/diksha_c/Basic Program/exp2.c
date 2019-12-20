/*the distance between two cities (in km) is input through the keyboard.Write a program to convert and print this program in meters, feet, inches and centimetres*/
#include<stdio.h>
int main()
{

    float dis,m,feet,inch,cm;
    printf("enter the distance in kms");
    scanf("%f",&dis);
    m=dis*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("distance in km=%f\ndistance in meters=%f\ndistance in centimeters=%f\ndistance in inches=%f\ndistance in feet=%f",dis,m,cm,inch,feet);
    return 0;
}

