#include<stdio.h>
void strong(int,int);
int main()
{
int llimit,ulimit;
printf("enter the lower limit and the upper limit");
scanf("%d%d",&llimit,&ulimit);
strong(llimit,ulimit);
return 0;
}
void strong(int llimit,int ulimit)
{
int i,f,j,s,k,i1;
for(i=llimit;i<=ulimit;i++)
{
    s=0;
  i1=i;
  for(k=1;i1>0;k++)
  {

  f=1;
  for(j=1;j<=(i1%10);j++)
  {
      f=f*j;
  }
         s=s+f;
      i1=i1/10;
}
  if(s==i)
printf("the strong numbers are %d\n",i);
}
}
