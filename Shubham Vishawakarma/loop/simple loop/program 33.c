#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
            if(n%i==0)
            break;

    }
    if(i==n)
    printf("%d is prime number",i);
    else
        printf("%d is not prime number",i);

    return 0;
}
