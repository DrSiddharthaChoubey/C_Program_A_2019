#include<stdio.h>
# define MAX 10
int main()
{
int a[MAX][MAX],i,j,n,s=0;
printf("enter array size");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("array elements are");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d",a[i][j]);
printf("\n");
}


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if((i+j)==(n-1)||(i==j))
{
s=s+a[i][j];
}
}
}
printf("sum of diagonals of array elements is %d",s);
return 0;
}
