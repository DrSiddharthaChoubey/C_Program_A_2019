#include<stdio.h>
int main()
{
int s[4][2]={
               {1234,56},
               {1212,33},
               {1434,83},
               {1312,78}
             };
int (*p)[2];
int i,j,*pint;
for(i=0;i<=3;i++)
{
p=&s[i];
pint=p;
printf("\n");
for(j=0;j<=1;j++)
printf("%d\t",*(pint+j));
}
return 0;
}
