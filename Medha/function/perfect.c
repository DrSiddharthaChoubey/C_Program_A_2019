#include<stdio.h>
int perfect(int,int);
int main()
{
    int x,y;
    printf("enter lower limit=");
    scanf("%d",&x);
    printf("enter upper limit=");
    scanf("%d",&y);
    perfect(x,y);
    return 0;
}
int perfect(int x,int y)
{
    int i,j,sum=0;
    for(i=x;i<=y;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
              sum=sum+j;
        }
        if(i==sum)
            printf("\n %d is perfect number",i);
    }
}
