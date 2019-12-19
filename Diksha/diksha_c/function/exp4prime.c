
#include<stdio.h>
void prime(int,int);
int main()
{
int llimit,ulimit;
printf("enter the lower limit and upper limit");
scanf("%d%d",&llimit,&ulimit);
prime(llimit,ulimit);
return 0;
}
void prime(int llimit,int ulimit)
{
int i,c,j;
for(i=llimit;i<=ulimit;i++)
{
for(j=1;j<=i;j++)
{

if(i%j==0)
c++;

if(c==2)
printf("%d is the prime number",i);
}

}
}
