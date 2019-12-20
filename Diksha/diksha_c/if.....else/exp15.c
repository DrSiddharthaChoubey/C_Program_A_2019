#include<stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a%5==0&&a%11==0)
printf("it is divisible");

else
printf("it is not divisible");
return 0;
}
