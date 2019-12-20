#include<stdio.h>
int main()
{
    int i,j,k,s,n,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {       l=1;
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("%d",l++);
        for(s=i;s<n;s++)
            printf("%d",--l-1);
        printf("\n");
    }
    return 0;
}




