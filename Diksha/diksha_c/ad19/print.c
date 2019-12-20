#include<stdio.h>
int main()
{
    int i=5,*j;
    j=&i;
    printf("\n Address of i = %u",j);
    printf("\n Address of i = %u",&i);
    printf("\n Address of j = %u",&j);
    printf("\n Value of i = %d",i);
    printf("\n Value of i = %d",*j);
    printf("\n Value of i = %d",*(&i));
    return 0;
}
