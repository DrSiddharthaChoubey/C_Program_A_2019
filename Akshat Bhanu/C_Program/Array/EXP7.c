#include<stdio.h>
int main()
{
    int a[5],i,neg=0;
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<5;i++)
        printf("\n%d",a[i]);
        for(i=0;i<5;i++)
    {
        if(a[i]<0)
            neg++;
    }
    printf("\nNo of neg element=%d",neg);

    return 0;
}

