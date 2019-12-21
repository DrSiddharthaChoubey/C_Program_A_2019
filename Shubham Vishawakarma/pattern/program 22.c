#include<stdio.h>
int main()
{
    int i,j,k,s,n;
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("%d",s);
            s--;
        printf("\n");
    }
    return 0;
}


