#include<stdio.h>
int main()
{
    int a,d=0,e=0;
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("number is divisible by 5");
        d=1;
    }
    if(a%11==0)
    {
            printf("\n number is divisible by 11");
            e=1;
    }
    if(d==0&&e==0)
                 printf("number is not divisible by 11 and 5");
    return 0;
}

