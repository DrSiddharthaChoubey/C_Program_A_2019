#include<stdio.h>
int main()
{
    int a[4][5],i,j;
    printf("enter value of matrix=");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
        }
        printf("your matrix");
        for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf(" %d",a[i][j]);
        }
        return 0;
}
