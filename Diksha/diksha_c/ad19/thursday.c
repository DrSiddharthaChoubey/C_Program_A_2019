#include<stdio.h>

int fact(int i)
{
int f=1;
while(i>=1)
{
    f=f*i;
    i--;
}
return f;
}
int main()
{
    int i,f;
    printf("\n Enter a number  ");
    scanf("%d",&i);
    f=fact(i);
    printf("factorial=%d",f);
    return 0;
}
