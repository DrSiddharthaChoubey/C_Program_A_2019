/**/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
        printf("Its a vowel");
    else
        printf("It is a consonant");
    return 0;

}