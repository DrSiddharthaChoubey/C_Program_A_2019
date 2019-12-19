/*if a four digit number is input through the keyboard, write a program to sum the first and last digit of this number.*/
#include<stdio.h>
 int main()
 {
 int n,f,l,sum=0;
 printf("enter the four digit number");
 scanf("%d",&n);
  printf("the four digit number=%d",n);
 l=n%10;

 f=n/1000;

 sum=f+l;
  printf("the sum of the four digit number=%d",sum);
  return 0;
  }

