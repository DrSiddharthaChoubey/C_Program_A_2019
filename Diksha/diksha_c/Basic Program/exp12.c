/*if the total selling price of the15 item and the total profit earned on them is input through the keyboard,write a program to find cost price of one item.*/
#include<stdio.h>

int main()
{
float sp ,p ,cp;
printf("enter selling price and profit of 15 items");
scanf("%f%f",&sp,&p);
cp=(sp-p)/15;
printf("the cost price  of  item%f",cp);
return 0;
}
