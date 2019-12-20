#include<stdio.h>
int power(int,int);
int fact(int);
int main()
{
float sum=0.0f;
int n,i;
printf("enter the limit");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+power(i,i)/fact(i);
i++;
}
printf("the sum is %f",sum);
}
int power(int x,int y)
{int i,p=1;
for(i=1;i<=y;i++)
p=p*x;
return(p);
}
int fact(int x)
{int i,f=1;
for(i=1;i<=x;i++)
f=f*i;
return(f);
}

