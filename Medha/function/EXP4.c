#include<stdio.h>
int isEven(int);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    if(isEven(n))
        printf("%d is even",n);
    else
        printf("%d is odd",n);
    return 0;
}
int isEven(int n)
{
    return(n%2==0?1:0);
}
