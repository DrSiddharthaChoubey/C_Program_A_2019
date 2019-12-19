#include<stdio.h>
int main()
{int n;
printf("\n Enter a number");
scanf("%d",&n);
sum(n);
return 0;
}
sum(int a)
{
    int x;
    x=(a*(a+1))/2;
    printf("the sum of numbers=%d",x);
}
