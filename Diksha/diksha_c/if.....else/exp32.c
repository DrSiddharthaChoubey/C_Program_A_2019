#include<stdio.h>
int main()
{
int unit;
float amt,sum;
printf("enter the unit charges");
scanf("%d",&unit);
if(unit<=50)
amt= unit*0.50;
else if(unit<150)
amt= (50*0.50)+((unit-50)*0.75);
else if(unit<=250)
amt= (50*0.50)+(150*1.20)+((unit-150)*1.20);
else
amt= (50*0.50)+(150*1.20)+(250*1.20)+((unit-150)*1.50);
sum=amt*20/100;
amt=amt+sum;
printf("%f",amt);
return 0;
}
