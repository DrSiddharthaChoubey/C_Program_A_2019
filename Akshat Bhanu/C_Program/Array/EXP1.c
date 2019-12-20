#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return 0;
}
