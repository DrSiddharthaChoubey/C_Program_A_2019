#include<stdio.h>
int main()
{
    int a=10,b=2,c=3,d=5;
    int *p[4];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    p[3]=&d;
    printf("\t %d %d %d %d",*p[0],*p[1],*p[2],*p[3]);
    return 0;
}
