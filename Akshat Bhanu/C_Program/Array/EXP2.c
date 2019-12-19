#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the value of Array");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
            printf("\nnegative element= %d",a[i]);
    }
    return 0;
}
