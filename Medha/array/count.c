#include<stdio.h>
int main()
{
    int a[7],i,count=0,item;
    printf("enter value=");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("enter item to be search=");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
        {
            count++;

        }
    }
        printf("item searched %d times",count);
        return 0;

}

