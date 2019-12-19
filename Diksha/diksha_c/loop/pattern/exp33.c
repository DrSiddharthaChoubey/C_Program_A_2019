#include<stdio.h>
int main()
{
int i,n;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)

{
if(n%i==0)
break;
}
if(i==n)
printf("the prime no. is %d",n);
else
printf("the prime no. is %d",n);


return 0;
}
