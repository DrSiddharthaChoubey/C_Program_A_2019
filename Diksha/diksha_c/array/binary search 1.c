#include<stdio.h>

int main()
{
int a[10],n,i,low,high,mid,item;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of the array in ascending order");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the item to be searched");
scanf("%d",&item);
low=0;high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(item==a[mid])
{printf("item found at %d position",mid+1);
}
if(item<a[mid])
high=mid-1;
else
low=mid+1;
}
return 0;
}
