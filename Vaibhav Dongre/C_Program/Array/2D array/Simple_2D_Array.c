#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("Enter array element  ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Array element are\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("    %d",a[i][j]);
        printf("\n");
    }
    return 0;
}
