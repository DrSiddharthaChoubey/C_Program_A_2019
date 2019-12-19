#include<stdio.h>

int main()
{
int s=0,c=0,n,n1,n2,n3,a,p=1,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  n3=n1=n2=i;
  c=0;
  s=0;
while(n3>0)
 {
    c++;
    n3=n3/10;
 }
while(n1>0)
 {
    p=1;
    a=n1%10;
    for(j=1;j<=c;j++)
          p=p*a;
    s=s+p;
    n1=n1/10;
 }
  if(n2==s)
  printf("%d is armstrong number",n2);
}
return 0;
}
