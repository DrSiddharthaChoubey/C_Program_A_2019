#include<stdio.h>

 int main()
 {
 int q,d=0;
 float p,t;
 printf("enter quantity and price ");
 scanf("%d%f",&q,&p);
 if(q>1000)
    d=10;
 t=(q*p)-(q*p*d/100);
 printf("total expenses=%f",t);
 return 0;
 }
