#include<stdio.h>
int main()
{
int a[10],n,i,j,temp;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&temp<a[j])
{

a[j+1]=a[j];
j--;
    }
    a[j+1]=temp;
}

printf("the sorted array is ");
for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}


