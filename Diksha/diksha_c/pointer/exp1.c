#include<stdio.h>
int main()
{
int a=10;
int *p;
 p=&a;
printf("%d\n",a);
printf("%u\n",&a);
printf("%u\n",&p);

printf("%u\n",p);
printf("%d\n",*p);
printf("%d\n",*(&p));
return 0;
}
