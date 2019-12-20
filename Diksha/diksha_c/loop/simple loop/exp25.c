#include<stdio.h>
int main()
{
int n1,n,i,a, rev=0;
printf("enter the range");
scanf("%d",&n);

while(n>0)
{
a=n%10;
rev=rev*10+a;
n=n/10;
}

printf("%d is a reverse",rev);

return 0;
}
