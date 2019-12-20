
#include<stdio.h>
int main()
{
    int p,r,t;
    float comp;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    comp=p*pow(1+r*0.01,t);
    printf("\n compound  interest=%f",comp);
    return 0;


}

