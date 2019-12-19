/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);

    if((a%5==0)&&(a%11==0))
        printf("Given number is divisible by 5 and 11");
    else if((a%5==0)&&(a%11!=0))
        printf(" divisible by 5 but not by 11");
        else if((a%5!=0)&&(a%11==0))
            printf("Divisible by 11 but not by 5");
        else if((a%5!=0)&&(a%11!=0))
            printf("Not divisible by 5 and 11");
    return 0;

}
