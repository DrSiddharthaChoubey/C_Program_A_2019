#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
    if(a==b&&b==c&&c==a)
    printf("equilateral triangle");
    else
        if(a==b||b==c||c==a)
    printf("isosceles triangle");


    if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
    printf("right angle  triangle");
     else
        if(a!=b&&b!=c&&c!=a)
    printf("scalene triangle");

    }
         else
        printf("invalid triangle");
    return 0;
}
