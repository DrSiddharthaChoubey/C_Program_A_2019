#include<stdio.h>
#define max 10
int main()
{
    int a[max],n,i,max1,max2;
    printf("enter size of array=");
    scanf("%d",&n);
    printf("enter value of array=");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
        {
            if(a[i]>max1)
            {
             max2=max1;
             max1=a[i];
            }
            else if(max2<a[i]&&a[i]<max1)
                  max2=a[i];
        }
    printf("%d %d",max1,max2);

    return 0;

}



