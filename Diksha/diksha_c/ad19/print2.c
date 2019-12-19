#include<stdio.h>
int main()
{
    int i=5,*j,**k;
    j=&i;
    k=&j;
    printf("\n Address of i = %u",j);
    printf("\n Address of i = %u",&i);
    printf("\n Address of i = %u",*k);
    printf("\n Address of j = %u",&j);
    printf("\n Address of j = %u",k);
    printf("\n Address of k = %u",&k);
    printf("\n Address of i = %u",j);
    printf("\n Address of j = %u",k);

    printf("\n Value of i = %d",i);
    printf("\n Value of i = %d",*j);
    printf("\n Value of i = %d",*(&i));
    printf("\n Value of i = %d",**k);

    return 0;
}
