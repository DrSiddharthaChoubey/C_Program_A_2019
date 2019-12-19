#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2;
    printf("Enter the value of a,b and c: a*x*x+b*x+c=0");
    scanf("%d%d%d",&a,&b,&c);

    root1=(-b+sqrt(b^2-4*a*c))/2*a;
    root2=(-b-sqrt(b^2-4*a*c))/2*a;
    printf("roots of the given equation=%f",root1,root2);
    return 0;
}
