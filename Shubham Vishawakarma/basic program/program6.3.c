/* Swapping of two numbers with two variable and using * and / */

#include<stdio.h>
int main()
{
    int c,d;
    printf("enter two value=");
    scanf("%d%d",&c,&d);
    c=c*d; //zero is not allowed
    d=c/d;
    c=c/d;
    printf("%d,%d",c,d);
    return 0;
}
