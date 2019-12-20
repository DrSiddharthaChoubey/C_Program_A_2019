#include<stdio.h>
int main()
{
    int a[7],i,flag=0,item;
    printf("enter value=");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("enter item to be search=");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("item searched at position=%d",i+1);
        else
            printf("not find");
        return 0;

}
