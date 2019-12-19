#include<stdio.h>
int main()
{
int i,n,f=1,j;
float s=0;
printf("enter the limit");
scanf("%d",&n);
i=1;
while(i<=n)
{
    f=1;
for(j=1;j<=i;j++)
f=f*j;
s=s+(1.0/f);
i++;
}
printf("the sum of the series is %f",s);
return 0;
}
