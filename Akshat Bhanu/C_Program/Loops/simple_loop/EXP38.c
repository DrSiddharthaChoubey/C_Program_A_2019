#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2;
    float sum=0,count=0,a;
    printf("Enter value of n");
    scanf("%d",&n);
    n2=n1=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(n1>0)
    {
        a=n1%10;
        sum=sum+pow(a,count);
        n1=n1/10;
    }
    if(sum==n2)
        printf("%d is a armstrong",n2);
    else
        printf("%d is not armstrong",n2);
    return 0;

}
