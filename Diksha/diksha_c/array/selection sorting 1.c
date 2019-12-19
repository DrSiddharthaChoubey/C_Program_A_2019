#include<stdio.h>
int main()
{
int a[10],n,i,j,temp;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
    if(a[i]>a[j])
    {
temp=a[i];
a[i]=a[j];
a[j]=temp;
    }
}
}
printf("the sorted array is ");
for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}


