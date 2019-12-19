/*if a five digit number is input through the keyboard,write a program to sum the digits of the number.*/
#include <stdio.h>
int main()
{
int n,p,q,r,s,t,sum=0;
printf("enter a five digit number");
scanf("%d",&n);
//while(n>0)
//{
p=n%10;
sum=sum+p;
n=n/10;
q=n%10;
//sum=sum+p;
n=n/10;
r=n%10;
//um=sum+p;
n=n/10;
s=n%10;
//sum=sum+p;
n=n/10;
t=n%10;
//sum=sum+p;
n=n/10;
sum=p+q+r+s+t;
//}
printf("the sum of digits is=%d",sum);
return 0;
}
