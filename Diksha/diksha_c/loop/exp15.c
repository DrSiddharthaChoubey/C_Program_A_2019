#include<stdio.h>
int main()
{
int n,f=1,i,p=1,k,j;
float s=0;
printf("enter the limit");
scanf("%d",&n);
i=1;
while(i<=n)
{
f=1;
p=1;
for(k=1;k<=i;k++)
p=p*i;
for(j=1;j<=i;j++)
f=f*j;
s=s+(p/(float)f);
i++;
}
printf("the sum of the series is %f",s);
return 0;
}
