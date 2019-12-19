/*Two numbers are input through keyboard in two locations C and D write a program to interchange the contents of C and D with the help of third variable.*/
#include <stdio.h>
int main()
{
int c,d,temp;
printf("enter the values of c and d");
scanf("%d%d",&c,&d);
temp=c;
c=d;
d=temp;
printf("value of c and d before interchange");
printf("%d",c);
printf("%d",d);
printf("value of c and d after interchange");
printf("%d",c);
printf("%d",d);
return 0;
}

