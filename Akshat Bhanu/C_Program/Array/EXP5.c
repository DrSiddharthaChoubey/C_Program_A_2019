#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX],i,n,max1,max2;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array element");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        max1=max2=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max1)
            {
                max2=max1;
                max1=a[i];
            }
            else if(max2<a[i]&&a[i]<max1)
                max2=a[i];
        }

            printf("\nlargest element= %d",max1);
        printf(" second largest element= %d",max2);
        return 0;

}
