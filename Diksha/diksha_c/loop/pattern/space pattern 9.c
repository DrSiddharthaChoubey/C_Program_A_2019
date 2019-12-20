#include<stdio.h>
int main()
{
int i,j,k,l,p=1;
for(i=1;i<=5;i++)
{
    p=1;
for(j=i;j<=5;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("%d",p++);
{
p=p-1;
}
for(l=1;l<i;l++)
{
printf("%d",--p);
}

printf("\n");

}
return 0;
}
