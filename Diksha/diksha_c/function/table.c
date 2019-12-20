#include<stdio.h>
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=10;i++)
    {
        s=n*i;
        printf("%d\n",s);
    }
    return 0;
}
void main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}
