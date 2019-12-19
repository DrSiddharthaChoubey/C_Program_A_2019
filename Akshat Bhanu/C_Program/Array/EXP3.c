#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are ");
    for(i=0;i<5;i++)
    printf("%d",a[i]);
    for(i=0;i<5;i++)
        sum=sum+a[i];
    printf("\nSum=%d",sum);

    return 0;
}
