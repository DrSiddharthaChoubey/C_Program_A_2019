#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            {
                if(i==n || i==1)
                    printf("*");
                else if(j==n || j==i)
                    printf("*");
                else
                    printf(" ");
            }


            printf("\n");

    }
    return 0;
}
