#include<stdio.h>
int main()
{
int a[10],n,i,j,pos;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position");
scanf("%d",&pos);
for(i=pos;i<=n-1;i++)
a[i-1]=a[i];
n=n-1;
printf("after deletion array elements are");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
