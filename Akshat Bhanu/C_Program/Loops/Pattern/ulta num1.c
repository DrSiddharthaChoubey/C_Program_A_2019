#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {s=n;
        for(j=i;j<=n;j++)
            printf("%d",s++);
        printf("\n");
    }
    return 0;
}

