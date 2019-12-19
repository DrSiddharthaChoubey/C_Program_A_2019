#include<stdio.h>
int main()
{
int f1,f2,f3,n,i;
printf("enter the range");
scanf("%d",&n);
printf("\n%d\n%d",f1,f2);
 i=3;
while(i<=n)
{
f3=f1+f2;
printf("\n%d",f3);
f1=f2;
f2=f3;
i++;
}
return 0;
}
