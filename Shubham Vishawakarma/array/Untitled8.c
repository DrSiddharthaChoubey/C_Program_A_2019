#include<stdio.h>
int main()
{
    int a[5],i,b[5];
    printf("enter five numbers=");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("\n after copying=");
    for(i=0;i<5;i++)
    printf("\n %d",b[i]);
    return 0;
}




