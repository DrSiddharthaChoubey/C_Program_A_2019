#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter five numbers=");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Array elements which are negative are=");
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
    {
    printf("\n %d",a[i]);
    }
    }
    return 0;
}


