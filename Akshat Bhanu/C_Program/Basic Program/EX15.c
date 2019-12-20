/*Write a program to convert days into years,week and days*/
#include<stdio.h>
int main()
{
    int days,year,week,days1;
    printf("Enter no of Days:");
    scanf("%d",&days);
    year=days/365;
    week=days/7;
    days=days/7;
    days=days1;
    printf("\nNo. of year%d",year);
    printf("\nno.of week%d",week);
    printf("\nno. of days",days1);
    return 0;



}
