#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    printf("enter five numbers=");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\n max=%d",max);
    printf("\n min=%d",min);
    return 0;
}



