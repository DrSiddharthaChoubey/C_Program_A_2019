#include<stdio.h>
int main()
{
int i,j,k,p=0;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
    if(i==1||i==4)
        printf("*");
    else if(j==1||j==i)
printf("*");
else
    printf(" ");
}
printf("\n");
}
return 0;
}
