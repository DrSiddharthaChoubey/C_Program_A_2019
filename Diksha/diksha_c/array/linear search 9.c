#include<stdio.h>
int main()
{
int a[10],i,pos,n,item;
printf("enter no. of array element and the array element");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("enter item value position");
scanf("%d%d",&item,&pos);
for(i=n-1;i>=pos-1;i--)

a[i+1]=a[i];
a[i+1]=item;s
n=n+1;
for(i=0;i<n;i++)
printf("the elements of array after insertion are %d",a[i]);
return 0;
}
