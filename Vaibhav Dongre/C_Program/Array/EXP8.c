#include<stdio.h>
int main()
{
    int a[5],i,b[5];
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<5;i++)
        printf("\n%d",a[i]);
    for(i=0;i<5;i++)
        b[i]=a[i];
        for(i=0;i<5;i++)
    printf("\nAfter copying=%d",b[i]);

    return 0;
}

