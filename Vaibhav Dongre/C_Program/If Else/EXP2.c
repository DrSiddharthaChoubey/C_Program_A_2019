#include<stdio.h>
int main()
{
    int y,jy,dy,b=0;
    printf("Enter current year=");
    scanf("%d",&y);
    printf("\nEnter year of joining",&jy);
    scanf("%d",jy);
    dy=y-jy;
    if(dy>3)
        b=2500;
    printf("Bonus=%d",b);
    return 0;
}

