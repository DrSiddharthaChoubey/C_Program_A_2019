#include<stdio.h>
int main()
{
    int i,j,k,n,l,s;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
            s=i-1;
        for(l=1;l<=i;l++)
            printf("%d",s--);

        printf("\n");
    }
    return 0;
}


