#include<stdio.h>
int main()
{
    int a[3][3]={2,3,5,4,6,7,8,9,7},i,j;


    printf("Array element are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("    %d",a[i][j]);
        printf("\n");
    }
    return 0;
}

