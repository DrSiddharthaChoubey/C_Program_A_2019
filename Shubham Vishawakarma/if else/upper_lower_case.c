#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("upper case alphabet");
    else if(ch>=97&&ch<=121)
         printf("lower case alphabet");
    return 0;
}

