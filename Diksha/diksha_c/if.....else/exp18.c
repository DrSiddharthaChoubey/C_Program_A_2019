/*write a program to check whether a character is alphabet or not.*/
#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("it is a alphabet");

else
printf("it is not a alphabet");
return 0;
}
