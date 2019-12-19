#include<stdio.h>
int main()
{
char ch;
printf("enter alphabates a,b or c:\n");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
printf("the letter is 'a'");
break;
case 'b':
case 'B':
printf("the letter is 'b'");
break;
case 'c':
case 'C':
printf("the letter is 'c'");
break;
default:
    printf("no match");
    break;
}
return 0;
}
