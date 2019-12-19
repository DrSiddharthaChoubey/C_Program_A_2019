#include<stdio.h>
int add(int,int);
int main()
{
    int sum,a=10,b=30;
sum= add(a,b);
printf("addition is%d",sum);
return 0;
}
int add(int x,int y)
{
return(x+y);
}
