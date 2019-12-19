/*write a program to find maximum between two numbers.*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)

printf("the maximum number is %d",a);
 if(b>a&&b>c)
printf("the maximum number is %d",b);
if(c>a&&c>b)
printf("the maximum number is %d",c);



return 0;
}
