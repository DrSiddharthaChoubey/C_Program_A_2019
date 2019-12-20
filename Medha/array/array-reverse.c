#include<stdio.h>
#define max 10
int main()
{
    int a[max],n,i,j,temp;
    printf("enter size of array=");
    scanf("%d",&n);
    printf("enter value of array=");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
    }
        for(i=0; i<n; i++)
            printf("%d ",a[i]);

    return 0;

}



