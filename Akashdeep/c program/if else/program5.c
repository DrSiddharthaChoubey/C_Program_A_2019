#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("max=%d",a);
    else if(b>a && b>c)
        printf("max=%d",b);
        else
            printf("max=%d",c);
    return 0;
}
