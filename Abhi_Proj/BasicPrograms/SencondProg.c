/*
    The distance between two cities(in KM) is input through the keyboard. Write a program to convert and print the distance in meter, feet, inches
    and centimeter.
*/

#include<stdio.h>

int main()
{
    float distance, distInMeter, distInFeet, distInInch, distInCM;

    printf("Enter the distance between two cities(In KM): ");
    scanf("%f", &distance);

    distInMeter = distance * 1000;
    distInFeet = distance * 3284;
    distInInch = distance * 39370.079;
    distInCM = distance * 100000;

    printf("\nEntered Distance(In KM): %.3f\n", distance);
    printf("Distance in Meter: %.3f\n", distInMeter);
    printf("Distance in Centimeter: %.3f\n", distInCM);
    printf("Distance in Feet: %.3f\n", distInFeet);
    printf("Distance in Inches: %.3f\n", distInInch);
    return 0;
}
