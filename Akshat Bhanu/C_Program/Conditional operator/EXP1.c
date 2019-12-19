#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    printf("%d",max);
    return 0;

}
