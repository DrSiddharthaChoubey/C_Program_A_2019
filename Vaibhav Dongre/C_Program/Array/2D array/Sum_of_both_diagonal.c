#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],n,i,j,sum=0;
    printf("Enter array size");
    scanf("%d",&n);
    printf("Enter the array element");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
    printf("Array elements are  \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }

    printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i+j)==(n-1)||(i==j))
                sum=sum+a[i][j];
        }
    }
    printf("sum =%d",sum);
    return 0;
}

