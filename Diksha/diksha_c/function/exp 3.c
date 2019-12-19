#include<stdio.h>
int factorial(int);
int main()
{
int a,f;
printf("enter the value of a");
scanf("%d",&a);
printf("factorial of %d is %d",a,factorial(a));
return 0;
}
int factorial(int x)
{int i,f=1;
for(i=1;i<=x;i++)
f=f*i;
return(f);
}
