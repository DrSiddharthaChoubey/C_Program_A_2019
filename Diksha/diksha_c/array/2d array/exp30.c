#include<stdio.h>
int main()
{
int a[3][3],i,j,s=0;
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

s=s+a[i][j];
}
printf("the sum of matrix is %d",s);


return 0;
}
