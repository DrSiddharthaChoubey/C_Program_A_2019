#include<stdio.h>
int main()
{
    int a[10],s,i;
    printf("enter ten numbers=");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("sum of array is=");
    for(i=0;i<10;i++)
    s+=a[i];
    printf(" %d",s);
    return 0;
}



