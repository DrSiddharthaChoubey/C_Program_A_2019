#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1,a2,a3;
    printf("Enter sides of a triangle");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1==a2==a3)
    printf("It is an equilateral triangle");
   else if((a1==a2!=a3)||(a2==a3!=a1)||(a1==a3!=a2))
   printf("Its an Isosceles triangle");
   else if(a1!=a2!=a3)
    printf("Its is a scalene triangle");
   else if((a1==a2+a3)||(a2==a1+a3)||(a3==a2+a1))
    printf("Its a right angled triangle");
   return 0;

}
