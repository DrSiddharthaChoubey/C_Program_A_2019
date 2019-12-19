#include<stdio.h>
int calculate(int,int,int,int,int,int*,float*);
int main()
{
    int n1,n2,n3,n4,n5,sum;
    float avg;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    calculate(n1,n2,n3,n4,n5,&sum,&avg);
    printf("\n sum=%d",sum);
    printf("\n average=%f",avg);
    return 0;
}
int calculate(int n1,int n2,int n3,int n4,int n5,int *sum,float *avg)
{
*sum=n1+n2+n3+n4+n5;
*avg=*sum/5.0;
}
