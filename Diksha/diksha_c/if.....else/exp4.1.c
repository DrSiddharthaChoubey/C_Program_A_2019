#include<stdio.h>
int main()
{
float sp,cp;
printf("enter the selling price and cost price");
scanf("%f%f",&sp,&cp);
if(sp>cp)
printf("the profit is%f",sp-cp);
else if(cp>sp)
printf("the loss is%f",cp-sp);
else
printf("no profit or loss");
return 0;
}
