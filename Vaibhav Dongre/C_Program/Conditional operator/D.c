#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    ch>=64&&ch<=90?printf("Upper case"):(ch>=97&&ch<=122?printf("Lower case"):printf("Wrong input"));
    return 0;

}
