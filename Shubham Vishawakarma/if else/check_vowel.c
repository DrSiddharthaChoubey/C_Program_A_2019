#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch1,ch;
    scanf("%c",&ch1);
    ch=tolower(ch1);
  if(ch=='a')
    printf("%c is a vowel.", ch);
 else if(ch=='e')
    printf("%c is a vowel.", ch);
 else if(ch=='i')
  printf("%c is a vowel.", ch);
else if(ch=='o')
 printf("%c is a vowel.", ch);
else  if(ch=='u')
  printf("%c is a vowel.", ch);
  else
    printf("%c is a consonant.", ch);
return 0;
}


