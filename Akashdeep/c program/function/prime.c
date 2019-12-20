#include<stdio.h>
#include <math.h>
int prime(int,int);
int main()
{
    int x,y;
    printf("enter lower limit=");
    scanf("%d",&x);
    printf("enter upper limit=");
    scanf("%d",&y);
    prime(x,y);
    return 0;
}
int prime(int x,int y)
{   int i,j,d;


    for(i=x;i<=y;i++)
    {
        for(j=2; j<i; ++j)
        {
        if(i%j==0)
           {
            d=1;
            break;
       }
       else
            d=0;
        }

    if(d==0)
        printf("\n %d is prime",i);
    }


}
