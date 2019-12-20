#include<stdio.h>
int main()
{
int hr,otp,i;
for( i=1;i<=10;i++)
{
printf("enter the no. of hours worked\n");
scanf("%d",&hr);
if (hr>40)
{
    otp=(hr-40)*12;
printf("overtime pay is %d\n",otp);
}
else
{
    printf("overtime pay is zero\n");
}
}
}
