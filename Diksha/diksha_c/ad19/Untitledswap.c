#include<stdio.h>
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

int main()
{
int a,b;
printf("\n Enter two numbers");
scanf("%d %d",&a,&b);
printf("\n Value before swap: \n a=%d,b=%d",a,b);
swap(&a,&b);
printf("\n Value after swap: \n a=%d,b=%d",a,b);
return 0;


}
