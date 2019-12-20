/*Two numbers are input through the keyboard into two location C and D.Write a program to interchange the content of C and D.
With using third variable*/
#include<stdio.h>
int main()
{
    int c,d,t;
    printf("Enter the value of C and D=");
    scanf("%d%d",&c,&d);

    printf("Value of C and D before interchange\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);

    t=c;
    c=d;
    d=t;

    printf("Value of C and D after interchange=\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    return 0;



}
