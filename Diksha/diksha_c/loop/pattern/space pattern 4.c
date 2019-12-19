#include<stdio.h>
int main()
{
int i,j,k,p=0;
for(i=1;i<=4;i++)
{
for(j=i;j<=4;j++)
printf(" ");
for(k=1;k<=i;k++)
{
    p++;
printf("%d",p);
}
printf("\n");
}
return 0;
}
