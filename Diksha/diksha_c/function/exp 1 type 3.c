#include<stdio.h>
int add();
int main()
{
    int sum;
sum= add();
printf("addition is%d",sum);
return 0;
}
int add()
{ int a=10,b=30,s;
s=a+b;
return(s);
}
