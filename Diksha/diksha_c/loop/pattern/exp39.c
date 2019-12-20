#include<stdio.h>
int main()
{
int i,s=0,n,m;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(s==n)
printf("the perfect no. is %d",n);

return 0;
}
