#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {s=97;
        for(j=1;j<=i;j++)
            printf("%c",s++);
        printf("\n");

    }
    return 0;
}


