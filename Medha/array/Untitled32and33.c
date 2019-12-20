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
    printf("according to major");
    for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i<j)
          sum+=a[i][j];
         }
        }
        printf("sum of upper triangular matrix=%d",sum);
        sum=0;
     for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i>j)
          sum+=a[i][j];
         }
        }
        printf("\n sum of lower triangular matrix=%d",sum);
        sum=0;
        printf("according to minor \n");
    for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i+j<n-1)
          sum+=a[i][j];
         }
        }
        printf("sum of upper triangular matrix=%d",sum);
        sum=0;
     for(i=0; i<n; i++)
        {
         for(j=0;j<n;j++)
         {
           if(i+j>n)
          sum+=a[i][j];
         }
        }
        printf("\n sum of lower triangular matrix=%d",sum);


    return 0;

}




