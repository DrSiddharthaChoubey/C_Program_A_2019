#include<stdio.h>
#define MAX 10
int main()
{
int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],r1,c1,r2,c2,i,j,sum=0,k;
printf("enter the value of r1");
scanf("%d",&r1);
printf("enter value of c1");
scanf("%d",&c1);
printf("enter the value of r2");
scanf("%d",&r2);
printf("enter the value of c2");
scanf("%d",&c2);

if(c1==r2)
    {
        printf("enter the value of array 1");
        for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);
  }
printf("array elements are ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("%d",a[i][j]);
printf("\n");
}
printf("enter the value of array 2");
for(i=0;i<r2;i++)
  {
  for(j=0;j<c2;j++)
  scanf("%d",&b[i][j]);
  }
printf("array elements are ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf("%d",b[i][j]);
printf("\n");
}
for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
    {
    sum=0;
    for(k=0;k<r1;k++)
       sum=sum+(a[i][k]*b[k][j]);
       c[i][j]=sum;
    }
  }
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
        printf(" %d",c[i][j]);
      printf("\n");
  }

    return 0;
}
}
