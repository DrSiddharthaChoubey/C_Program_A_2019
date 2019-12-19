#include<stdio.h>

int main()
{
int s=0,c=0,n,n1,n2,a,p=1,i;
printf("enter the number");
scanf("%d",&n);
n2=n1=n;
while(n>0)
{
    c++;
    n=n/10;
}
while(n1>0)
{
    p=1;
a=n1%10;
for(i=1;i<=c;i++)
    p=p*a;
s=s+p;
n1=n1/10;
}
if(n2==s)
printf("%d is armstrong number",n2);

return 0;
}
