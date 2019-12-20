#include<stdio.h>
void perfect(int,int);
int main()
{
int llimit,ulimit;
printf("enter the lower limit and the upper limit");
scanf("%d%d",&llimit,&ulimit);
perfect(llimit,ulimit);
return 0;
}
void perfect(int llimit,int ulimit)
{
int i,j,s;
for(i=llimit;i<=ulimit;i++)
{
    s=0;
for(j=1;j<i;j++)
{
if(i%j==0)
s=s+j;
}
if(s==i)
printf("the prime numbers are %d\n",i);
}
}
