#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97&&ch<=121))
        printf("alphabet");
    else
         printf("not alphabet");
    return 0;
}
