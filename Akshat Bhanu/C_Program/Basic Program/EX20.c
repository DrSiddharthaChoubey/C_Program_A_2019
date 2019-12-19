/*write a program to find area of an equilateral triangle.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("enter side of triangle:");
    scanf("%f",&side);
    area=(1.727/4)*side*side;
    printf("Area=%f",area);
    return 0;
}
