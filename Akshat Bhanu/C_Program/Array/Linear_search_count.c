#include<stdio.h>
int main()
{
    int a[7],i,count=0,item;
    printf("Enter ARRAY Element");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("Enter the item value to be searched");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
        {
            count++;

        }
    }
    if(count>0)
        printf("Item found %d times",count);
    else
        printf("Item not found");
    return 0;

}

