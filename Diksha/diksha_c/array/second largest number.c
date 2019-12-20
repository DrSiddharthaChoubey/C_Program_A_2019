#include<stdio.h>
#include<limits.h>
int main()
{
int a[10],n,i,j,temp,max1,max2;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max1=max2=INT_MIN;
for(i=0;i<n;i++)
{
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}
else if(max2<a[i]&&a[i]<max1)
max2=a[i];
}

    printf("%d\n",max2);
return 0;
}



