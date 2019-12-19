#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter value of n");
    scanf("%d",&n);
    s=97;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("%c",s);
            s=s+1;
        printf("\n");
    }
    return 0;
}




