#include<stdio.h>
int main()
{
int n,n1,rev=0,a;
printf("enter the number");
scanf("%d",&n);
n1=n;
a=n1%10;
n1=n1/10;
rev=rev+a*10000;
a=n1%10;
n1=n1/10;
rev=rev+a*1000;
a=n1%10;
n1=n1/10;
rev=rev+a*100;
a=n1%10;
n1=n1/10;
rev=rev+a*10;
a=n1%10;
n1=n1/10;
rev=rev+a*1;
if(n1==rev)
printf("both  are equal");
else
printf("both  are not equal");
return 0;
}
