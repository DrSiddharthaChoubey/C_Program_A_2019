#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX],n,i,j,pos;
    printf("Enter size of Array");
    scanf("%d",&n);
    printf("Enter Array element");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Position");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
        a[i-1]=a[i];
    n=n-1;
    printf("After Deletion Array element");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
