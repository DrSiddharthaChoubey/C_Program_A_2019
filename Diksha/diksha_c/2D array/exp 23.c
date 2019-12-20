#include<stdio.h>
#define MAX 10
int main()
{
int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the value of array 1");
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
printf("enter the value of array 2");
for(i=0;i<3;i++)
  {
  for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
  }
printf("array elements are ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d",b[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
printf("%d\t",c[i][j]);
  printf("\n");
  }

return 0;
}
