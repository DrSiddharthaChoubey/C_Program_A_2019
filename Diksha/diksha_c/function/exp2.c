#include<stdio.h>
int power(int,int);
int main()
{
int a,b,p;
printf("enter the value of a nd b");
scanf("%d%d",&a,&b);
printf("%d raised to %d is %d",a,b,power(a,b));
return 0;
}
int power(int x,int y)
{int i,p=1;
for(i=1;i<=y;i++)
p=p*x;
return(p);
}
