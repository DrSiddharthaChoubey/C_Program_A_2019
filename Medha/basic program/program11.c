#include<stdio.h>
int main()
{
    int n,ten,fifty,hundred;
    scanf("%d",&n);
        hundred=n/100;
        n=n%100;
        fifty=n/50;
        n=n%50;
        ten=n/10;
       printf("ten rupees notes =%d",ten);
       printf("\n fifty rupees notes =%d",fifty);
       printf("\n hundred rupees notes =%d",hundred);
    return 0;
}
