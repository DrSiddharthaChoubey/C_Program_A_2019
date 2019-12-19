#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3],b[i][j];
    printf("enter the value of 1st matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
   printf("enter the value of 2nd matrix: ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }



     printf("addition of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf(" %d ",a[i][j]+b[i][j]);
        printf("\n");
    }

     for(i=0;i<3;j++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            printf(" %d "),a[i][j]*b[i][j]);
        printf("\n");
    }
return 0;

}

