/**/
#include<stdio.h>
int main()
{
    int qty,dis=0;
    float price,total;
    printf("Enter Quantity and Price=");
    scanf("%d%f",&qty,&price);

    if(qty>1000)
        dis=10;
    total=(qty*price)-(qty*price*dis/100);
    printf("\nTotal Expences=%f",total);
    return 0;
}
