#include<stdio.h>
float add(int,float);
int main()
{
float sum,b;
int a;
printf("enter the value of a and b");
scanf("%d%f",&a,&b);
sum=add(a,b);
printf("the sum is %f",sum);
return 0;
}
float add(int x,float y)
{
float s;
s=x+y;
return(s);
}
