#include<stdio.h>
int main()
{
    int n,n1,rev=0,a;
    printf("Enter no");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    if(n1==rev)
        printf("%d is palindrome",n1);
    else
        printf("%d if not palindrome",n1);
    return 0;
}
