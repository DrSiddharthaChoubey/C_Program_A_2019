#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf("it is a capital letter");
else if(ch>=97&&ch<=122)
printf("it is a small case letter");
else if(ch>=48&&ch<=57)
printf("it is a digit");
else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
printf("it is a special character");
return 0;
}
