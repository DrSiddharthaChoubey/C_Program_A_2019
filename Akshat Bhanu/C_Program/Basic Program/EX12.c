/*If total selling price of 15 items and the total profit earned on them is input through keyboard, write a program to find the cost
price of one item*/
#include<stdio.h>
int main()
{
    float sp,p,cp;
    float cpi;
    printf("enter total selling price:");
    scanf("%f",&sp);
    printf("enter total profit:");
    scanf("%f",&p);
    cp=sp-p;
    cpi=(sp-p)/15;
    printf("\ncost price of 15 item:%9.2f",cp);
    printf("\ncost price of one item:%9.2f",cpi);
    return 0;


}
