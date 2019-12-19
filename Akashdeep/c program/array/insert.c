#include<stdio.h>
int main()
{
    int a[10],i,flag=0,item,pos,n;
    printf("enter value of n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter item and position=");
    scanf("%d %d",&item,&pos);
    for(i=n-1;i<pos-1;i--)

    {
        a[i+1]=a[i];
    }
        n=n+1;
        a[pos-1] = item;
        for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
        return 0;

}

