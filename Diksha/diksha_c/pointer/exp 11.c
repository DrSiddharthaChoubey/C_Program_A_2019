#include<stdio.h>
void swap(int*,int*);
int main()
{int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("after swaping a is %d and b is %d",a,b);
return 0;
}
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
