#include<stdio.h>
int main()
{
    int a[5],i,even=0,odd=0;
    printf("Enter the value of Array");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array element are");
    for(i=0;i<5;i++)
        printf("\n%d",a[i]);
        for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            even++;
    else
        odd++;
    }
    printf("\nNo of odd element=%d",odd);
    printf("\nNo of even element=%d",even);
    return 0;
}
