/**/
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter value of A,B,C=");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
        max=a;
    if(b>a&&b>c)
        max=b;
    if(c>a&&c>b)
        max=c;
    printf("Max=%d",max);
    return 0;
}

