/*a cashier has currency notes of denominations10,50,100.If the amount to be withdrawn is input through the keyboard in hundereds, find the
 total number of currency notes of each denominations the cashier will have to give to the withdrawer.*/
#include<stdio.h>
 int main()
 {
 int amount,noh,nof,not;
 printf ("enter amount in hundereds");
 scanf("%d",&amount);
  printf (" amount in hundereds=%d",amount);
 noh=amount/100;
 amount=amount%100;
 nof=amount/50;
 amount=amount%50;
 not=amount/10;
 printf ("no. of hundereds currency %d\nno. of fifty currency %d\nno. of tens currency %d\n",noh,nof,not);
 return 0;
 }
