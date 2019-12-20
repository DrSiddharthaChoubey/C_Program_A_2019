#include<stdio.h>
int main()
{
int p,c,b,m,co,per;
printf("enter the marks of five subjects");
scanf("%d%d%d%d%d",&p,&c,&b,&m,&co);
per=(p+c+b+m+co)/5;
if(per>=90)
printf("grade=A");
else if(per>=80)
  printf("grade=B");
else if(per>=70)
printf("grade=C");
else if(per>=60)
printf("grade=D");
else if(per>=40)
printf("grade=E");
else
printf("grade=F");
return 0;
}
