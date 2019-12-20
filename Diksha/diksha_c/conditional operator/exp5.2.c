#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>=48&&c<=57))?printf("not a special character"):printf("it is a special character");
return 0;
}
