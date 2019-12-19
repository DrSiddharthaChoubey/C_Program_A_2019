#include<stdio.h>
int main()
{
    int i,j,k,s;
    for(i=1;i<=4;i++)
    {   s=4;
        for(j=i;j<4;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",s--);
            printf("\n");
    }
    return 0;
}


