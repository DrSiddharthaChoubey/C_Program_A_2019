/*write a c program to find power of any number x^y*/
#include<stdio.h>
#include<math.h>

 int main()
 {
 int x,y,power;
printf("enter two no.");
scanf ("%d%d",&x,&y);
power=pow(x,y);
printf("power of %d^%d%d",x,y,power);
return 0;
}


