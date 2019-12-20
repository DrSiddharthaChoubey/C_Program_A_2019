#include<stdio.h>
int main()
{
    int a[10],i,j,k,data,n;
    printf("enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        data=a[i];
    {
        for(j=i+1;j<n;j++)
        {
            if(data=a[j])
            {
                for(k=j;k<n;k++)
                    a[k+1]=a[k];
                n=n-1;
                j=j-1;
            }
        }
    }

    }
        for(i=0;i<n+1;i++)
        printf("%d ",a[i]);
        return 0;

}



