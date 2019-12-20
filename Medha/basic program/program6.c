/* Swapping of two numbers*/

#include<stdio.h>
int main()
{
    int c,d,f;
    printf("enter two value=");
    scanf("%d%d",&c,&d);
    f=c;
    c=d;
    d=f;
    printf("%d,%d",c,d);
    return 0;
}
