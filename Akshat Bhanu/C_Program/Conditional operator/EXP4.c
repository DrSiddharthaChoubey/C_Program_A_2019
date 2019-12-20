/**/
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter year");
    scanf("%d",&yr);
    (yr%4==0)? printf("It is a leap year"): printf("Its not a leap year");
    return 0;
}
