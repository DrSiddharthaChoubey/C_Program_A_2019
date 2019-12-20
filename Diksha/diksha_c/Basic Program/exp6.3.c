/*Two numbers are input through keyboard in two locations C and D write a program to interchange the contents of C and D without using third variable and using operator (except + and-).*/
#include <stdio.h>
int main()
{
int c,d;
printf("enter the values of c and d");
scanf("%d%d",&c,&d);
printf("value of c and d before interchange");
printf("%d",c);
printf("%d",d);
c=c*d;
d=c/d;
c=c/d;

printf("value of c and d after interchange");
printf("%d",c);
printf("%d",d);
return 0;
}


