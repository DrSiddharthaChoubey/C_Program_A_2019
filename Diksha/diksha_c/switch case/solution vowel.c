#include<stdio.h>
int main()
{
char ch;
printf("enter any character");
scanf("%c",&ch);
if ((ch>='A' && ch<='Z')||(ch>='a'|| ch<='z'))
{
switch(ch)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("%d is a vowel",ch);
break;
default:
printf("%d is a consonant",ch);
break;
}
}
else
printf("unwanted character");
return 0;
}
