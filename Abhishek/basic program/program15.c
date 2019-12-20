#include<stdio.h>
int main()
{
    int days,year,weeks,n;
    scanf("%d",&n);
    year=n/365;
    n=n%365;
    weeks=n/7;
    days=n%7;
    printf("\n year=%d",year);
    printf("\n weeks=%d",weeks);
    printf("\n days=%d",days);
    return 0;
}
