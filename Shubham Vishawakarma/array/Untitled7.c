#include<stdio.h>
int main()
{
    int a[5],i,neg=0;
    printf("enter five numbers=");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
            neg++;
    }
    printf("\n number of negative=%d",neg);
    return 0;
}




