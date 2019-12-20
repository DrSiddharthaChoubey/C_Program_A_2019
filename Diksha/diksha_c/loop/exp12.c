#include<stdio.h>
int main()
{
int n,f=1,i,j;
float s=0;
printf("enter the limit");
scanf("%d",&n);
i=1;
while(i<=n)
{
    f=1;
for(j=1;j<=i;j++)
f=f*j;
if (i%2==0)
s=s-(i/(float)f);
else
s=s+i/(float)f;
i++;
}
printf("the sum of the series is %f",s);
return 0;
}
