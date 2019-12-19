/* Write a program to find power any number*/
#include<math.h>
int main()
{
    int a,b,power;
    printf("enter value of A and B:");
    scanf("%d%d",&a,&b);
    power=pow(a,b);
    printf("power of%d^%d=%d",a,b,power);
    return 0;
}
