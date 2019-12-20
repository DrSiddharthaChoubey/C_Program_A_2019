#include<stdio.h>
int main()
{

int i,j,n;
//printf("enter the number of rows");
//scanf("%d",&n);
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
if((i+j)%2==0)
printf("%d",1);
else
    printf("%d",0);

}
printf("\n");
}
return 0;
}
