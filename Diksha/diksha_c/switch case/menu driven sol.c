#include <stdio.h>
#include <stdlib.h>
int main()
{
int choice,n,i,f;
while(1)
{
printf("\n\t\tMENU\t\t");
printf("\n Factorial");
printf("\n Prime or Not");
printf("\n Odd or Even");
printf("\n Exit");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
f=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("factorial no is %d\n",f);
break;

case 2:
printf("enter the value of n");
scanf("%d",&n);
printf("entered no is %d\n",n);
for(i=2;i<n;i++)
{
 if(n%i==0)
     break;
}
if (i==n)
printf("%d is prime\n");
  else
printf("%d is not prime\n");
  break;

case 3:
printf("enter the value of n");
scanf("%d",&n);
if (n%2==0)
printf("\n%d is even",n);
else
printf("\n%d is odd",n);
break;
case 4:
exit(0);
default:
printf("enter the right choice");
}
}
return 0;
}
