#include<stdio.h>
int main()
{
int i,j,s=0,n,m;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)

{
    s=0;
for(j=1;j<i;j++)
{
if(i%j==0)
s=s+j;
}
if(s==i)
printf("the perfect no. is %d",i);
}
return 0;
}
