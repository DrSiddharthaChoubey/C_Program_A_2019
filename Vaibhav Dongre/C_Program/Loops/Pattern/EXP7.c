#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],b[MAX][MAX],i,j,r,c;
    printf("Enter the number of row and column");
    scanf("%d%d",&r,&c);
    printf("Enter the array element");
    for(i=0;i<r;i++);
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Array element are");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d",a[i][j]);
            printf("\n");
    }
    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[j][i]=a[i][j];
    }*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("Transpose \n");
        printf("%d",b[i][j]);
        printf("\n");
    }


            /*if(r=c)
            {
                if(b[j][i]==a[i][j])
                    printf("It is a transpose");
            }
            else
                printf("It is not transpose");
*/

    return 0;
}
