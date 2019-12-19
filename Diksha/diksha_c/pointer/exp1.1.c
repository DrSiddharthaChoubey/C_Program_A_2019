#include<stdio.h>
void calc(int,int,int,int,int,int*,int*,int*);
int main()
{
int a,b,c,d,e,s,sd,av;
printf("enter the 5 integers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
calc(a,b,c,d,e,&s,&av,&sd);
printf("the average is %d\n the average is %d\n the standard deviation is %d",s,av,sd);
return 0;
}
 void calc(int a,int b,int c,int d,int e,int*s,int*av,int*sd)
{
*s=a+b+c+d+e;
*av=*s/5;
*sd=pow((a-*av),2)+pow((b-*av),2)+pow((c-*av),2)+pow((d-*av),2)+pow((e-*av),2);
}
