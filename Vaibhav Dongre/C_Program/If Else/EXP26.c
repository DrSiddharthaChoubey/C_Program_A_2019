#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)||(b+c>a)||(c+a>b))
        printf("It is a valid angle");
    else
        printf("It is not a valid angle");
    return 0;
}
