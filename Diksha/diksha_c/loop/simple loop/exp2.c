#include<stdio.h>
int main()
{
int f=1,i,n;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("the factorial of the given number is %d",f);
return 0;
}
