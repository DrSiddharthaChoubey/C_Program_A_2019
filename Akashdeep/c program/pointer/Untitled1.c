#include<stdio.h>
int main()
{
    int a[5]={2,4,6,8,10};
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n address=%u address=%u",(a+i),(i+a));
        printf("\n value=%d value=%d",*(a+i),*(i+a));
        printf("\n value=%d value=%d",a[i],i[a]);
        printf("\n");
    }
    return 0;
}
