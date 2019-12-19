#include<stdio.h>
int fact(int);
int main()
{
    int a,f;
    printf("Enter the value of a");
    scanf("%d",&a);
    f=fact(a);
    printf("factorial of %d=%d",a,f);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return (f);
}


