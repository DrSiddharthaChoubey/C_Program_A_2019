#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
 switch(tolower(ch))
{
  case 'a':printf("%c is a vowel.", ch);
           break;
  case 'e':printf("%c is a vowel.", ch);
           break;
  case 'i':printf("%c is a vowel.", ch);
           break;
  case 'o':printf("%c is a vowel.", ch);
           break;
  case 'u':printf("%c is a vowel.", ch);
           break;
  default:printf("%c is a consonant.", ch);
}
return 0;
}


