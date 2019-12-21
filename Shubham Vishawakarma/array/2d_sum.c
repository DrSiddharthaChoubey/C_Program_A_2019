
#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],b[MAX][MAX],sum[MAX][MAX],c,r,i,j;
    printf("enter value of row=");
    scanf("%d",&r);
    printf("enter value of column=");
    scanf("%d",&c);
    printf("enter value for matrix A");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
        }

    printf("enter value for matrix B");
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("sum=");
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf(" %d",sum[i][j]);
        }
        return 0;
}
