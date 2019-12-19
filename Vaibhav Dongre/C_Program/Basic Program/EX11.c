/* A cashier has currency notes of denomination 10,50,100.If the amount to be withdrawn is input through keyboard in hundreds
Find the total  number of currency notes of each denomination the cashier will have to give to the withdrawer.*/
#include<stdio.h>
int main()
{
    int rs,noh,nof,not;
    printf("Enter the amount:");
    scanf("%d",&rs);
    noh=rs/100;
    rs=rs%100;
    nof=rs/50;
    rs=rs%50;
    not=rs/10;
    printf("\nnumber of notes of 100:%d",noh);
    printf("\nnumber of notes of 50:%d",nof);
    printf("\nnumber of notes of 10:%d",not);
    return 0;


}
