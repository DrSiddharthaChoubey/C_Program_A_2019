#include<stdio.h>
int main()
{
int n1,n,i,a, rev;
printf("enter the range");
scanf("%d",&n);

while(n>0)
{
a=n%10;
rev=rev*10+a;
n=n/10;
}
if(n1==rev)
printf("%d is a palindrome",n1);
else
printf("%d is not a palindrome",n1);

return 0;
}
