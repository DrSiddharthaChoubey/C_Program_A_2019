/*Write  a program to enter two angle of triangle and find the third angle.*/
#include<stdio.h>

int main()
{
    int a1,a2,a3;
    printf("enter 1st angle:");
    scanf("%d",&a1);
     printf("enter 2nd angle:");
    scanf("%d",&a2);
    a3=180-(a1+a2);
    printf("third angle of triangle:%d",a3);
    return 0;

}
