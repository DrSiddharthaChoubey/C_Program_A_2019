#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0f;
    printf("Enter value of n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+power(i,i)/fact(i);
        i++;
    }
    printf("Sum of series=%f",sum);
    return 0;
}
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
        return (p);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return (f);
}
