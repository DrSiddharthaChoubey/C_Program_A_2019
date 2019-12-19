#include<stdio.h>
#define MAX 10
int main()
{
int a[MAX][MAX],i,j,sum=0,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the value of array");
for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
  }
printf("array elements are ");
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
    if((i+j)<(n-1))
    sum=sum+a[i][j];
    }
  }
  printf("sum of upper triangle of minor diagonal= %d",sum);
  return 0;
}
