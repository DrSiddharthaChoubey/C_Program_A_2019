/*write a program to find maximum between two numbers.*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("the maximum number is %d",a);
else


printf("the maximum number is %d",c);

}
else
{
if(b>c)
printf("the maximum number is %d",b);

else
printf("the maximum number is %d",c);
}


return 0;
}
