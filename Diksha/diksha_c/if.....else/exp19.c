/*write a program to check whether a alphabet is a vowel or consonant.*/
#include<stdio.h>
//#include<ctype.h>
int main()
{
char ch,ch1;

printf("enter the character");
scanf("%c",&ch);
ch1=tolower(ch);
if((ch1=='a')||(ch1=='e')||(ch1=='i')||(ch1=='o')||(ch1=='u'))
printf("it is a vowel");
else
printf("it is a consonant");
return 0;
}
