/**/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year");
    scanf("%d",&year);

    if(year%4==0)
        printf("Entered Year is a leap year");
    else
        printf("It is not a leap year");
    return 0;

}
