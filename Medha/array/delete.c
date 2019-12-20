#include<stdio.h>
int main()
{
    int a[10],i,j,pos,n;
    printf("enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter position=");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)

    {
        a[i-1]=a[i];
    }
        n=n-1;
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;

}


