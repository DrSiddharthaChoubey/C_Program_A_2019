#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    ch>=64&&ch<=97&&ch<=48&&ch>=57?printf("Not a special character"):printf("Special character");
    return 0;
}
