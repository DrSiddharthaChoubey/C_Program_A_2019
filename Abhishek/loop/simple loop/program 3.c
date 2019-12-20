#include<stdio.h>
int main()
{
    int a,b,i,power=1;
    printf("enter two number=");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
        power=power*a;
    printf("a^b=%d",power);
    return 0;
}
