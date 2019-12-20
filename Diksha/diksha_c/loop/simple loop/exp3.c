#include<stdio.h>

int main()
{
int n,m,i,s=1;
printf("enter the number of n and m");
scanf("%d%d",&n,&m);

for(i=1;i<=m;i++)
{
s= s*n;
}
printf("the value of n to the power m is %d",s);
return 0;

}
