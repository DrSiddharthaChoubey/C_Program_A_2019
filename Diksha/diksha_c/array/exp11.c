#include<stdio.h>
int main()
{
int a[10],n,i,j,k,data;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
data=a[i];
for(j=i+1;j<n;j++)
{
if(data==a[j])
{
for(k=j;k<n-1;k++)
a[k]=a[k+1];
n=n-1;
j-=1;
}
}
}
printf("after deletion array elements are");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
