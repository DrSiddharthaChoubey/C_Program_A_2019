#include<stdio.h>
int main()
{
    int days;
    float fine;
    scanf("%d",&days);
    if(days==5)
        fine=0.50*days;
    if(days>=6 && days<=10)
        fine=days;
    if(days>10 && days<30)
        fine=5*days;
    if(days>30)
        printf("membership cancelled");
        else
    printf("fine=%2f",fine);
    return 0;

}
