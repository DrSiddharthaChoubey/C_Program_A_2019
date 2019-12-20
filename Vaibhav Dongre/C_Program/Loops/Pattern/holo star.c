#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
            printf(" ");
            for(k=1;k<=i;k++)

            {
            if(i==n)
                 printf("*");
            else if(j==i)
                printf("*");
            else
                printf(" ");
            }


        printf("\n");
    }
    return 0;
}




