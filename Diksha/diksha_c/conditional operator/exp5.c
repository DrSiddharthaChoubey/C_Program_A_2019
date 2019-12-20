#include<stdio.h>
int main()
{
char a;
printf("enter the character");
scanf("%c",&a);
((a>=65&&a<=90)||(a>=97&&a<=122))?printf("it is alphabet character"):printf("it is not a alphabet character ");
return 0;
}
