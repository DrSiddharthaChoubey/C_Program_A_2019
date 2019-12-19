#include<stdio.h>
//#define MAX 10
int main()
{
    int a[10],n,i,j,data,k;
    printf("Enter size of Array");
    scanf("%d",&n);
    printf("Enter Array element");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n;i++)
      {

        data=a[i];
     for(j=i+1;j<n;j++)
        if(data==a[j])
        {
            for(k=j;k<n;k++)
            {

                a[k]=a[k+1];
            n--;
            j--;
            }
        }
    }
    printf("After Deletion Array element");
    for(i=0;i<n+1;i++)
        printf("    %d",a[i]);
    return 0;
}

