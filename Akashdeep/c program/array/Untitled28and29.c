#include<stdio.h>
#define max 10
int main()
{
    int a[max][max],n,i,j,sum=0;
    printf("enter size of array=");
    scanf("%d",&n);
    printf("enter value of array=");
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i==j)
          sum+=a[i][j];
         }
        }
        printf("sum of principle diogonal=%d",sum);
        sum=0;
     for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i+j==n-1)
          sum+=a[i][j];
         }
        }
        printf("\n sum of second diogonal=%d",sum);

    return 0;

}



