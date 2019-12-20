#include<stdio.h>
int main()
{
    int a[4]={10,20,40,50};
    int *p[4]={a+0,a+1,a+2,a+3};
    int **ptr=p;

    printf("%d%d%d%d%",**ptr);
    return 0;
}

