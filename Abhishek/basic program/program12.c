#include<stdio.h>
int main()
{
    int sellprice,profit,itemprofit,cost,item;
    scanf("%d%d",&sellprice,&profit);
    /*item=sellprice/15;
    itemprofit=profit/15;
    cost=item-itemprofit;*/

cost=(sellprice-profit)/15;
    printf("cost of one item=%d",cost);
    return 0;
}
