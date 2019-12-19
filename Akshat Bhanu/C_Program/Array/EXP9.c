#include<stdio.h>
int main()
{
    int a[10],i,item,pos,n;
    printf("\nEnter the value of n");
    //printf("\nEnter the Array element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter item position and its value to be inserted");
        scanf("%d%d",&pos,&item);
        for(i=n-1;i>=pos-1;i--)
        {

            a[i+1]=a[i];
        }
        n=n+1;
        a[i+1]=item;
    for(i=0;i<n;i++)
    {

        printf("%d   ",a[i]);
    }
        return 0;

}
