/*Two numbers are input through the keyboard into two location C and D.Write a program to interchange the content of C and D.
without using third variable*/

#include<stdio.h>
 int main()
 {
     int c,d;
      printf("enter the value of C=");
      scanf("%d",&c);
      printf("enter the value of D=");
      scanf("%d",&d);
      c=c+d;
      d=c-d;
      c=c-d;

      printf("New value of C=%d\n",c);
      printf("New value of D=%d\n",d);
      return 0;

 }
