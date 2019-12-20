#include<stdio.h>
int main()
{
int nod;
printf("enter no. of days late");
scanf("%d",&nod);
if(nod>=1&&nod<=5)
printf("fine=%.2f",nod*0.5);
else if(nod>=6&&nod<=10)
printf("fine=%.2f",nod*1.00);
else if(nod>=11&&nod<=30)
printf("fine=%.2f",nod*5.00);
else
printf("your maember ship is cancelled");
return 0;
}
