#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=i;j<=4;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("%d",k);
printf("\n");
}
return 0;
}
