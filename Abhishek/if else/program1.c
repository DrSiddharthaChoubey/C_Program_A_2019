#include<stdio.h>
int main()
{
    int qty;
    float price,tot,dis=0.0;
    printf("enter the qty and price=");
    scanf("%d%f",&qty,&price);
    if(qty>1000)
    {
        dis=0.10;
    }
    tot=(qty*price)-(qty*price*dis);
    printf("total expenses=%f",tot);
    return 0;
}
