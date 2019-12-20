#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<5;i++)
    printf("\n%d",a[i]);
    max=min=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        else if(min>a[i])
            min=a[i];
    }
    printf("\nMaximum element=%d",max);
    printf("\nMinimum element=%d",min);
    return 0;
}
