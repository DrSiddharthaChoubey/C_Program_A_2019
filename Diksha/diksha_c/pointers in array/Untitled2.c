#include<stdio.h>
int main()
{
int a=10,b=20,c=30,d=40,*p[4];
//int *p[4];
p[0]=&a;
p[1]=&b;
p[2]=&c;
p[3]=&d;
printf("%d%d%d%d",*p[0],*p[1],*p[2],*p[3]);
return 0;

}
