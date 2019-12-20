#include<stdio.h>
int main()
{
int i,a,b,c,n=1;
i=n;
while(i<=500)
{
    a=i%10;
    b=i%100;
    b=(b-a)/10;
    c=i/100;
    if((a*a*a+b*b*b+c*c*c)==i)
    {
        printf("%d is an armstrong number",i);
        i++;
    }

}
return 0;
}
