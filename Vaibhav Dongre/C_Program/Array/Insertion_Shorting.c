#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX],n,i,j,temp;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("\nEnter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+i]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
