#include<stdio.h>
int main()
{
    int a=10,b=20,c=40,d=50;
    int *pa,*pb,*pc,*pd;
    pa=&a;
    pb=&b;
    pc=&c;
    pd=&d;
    printf("%d%d%d%d%",*pa,*pb,*pc,*pd);
    return 0;
}
