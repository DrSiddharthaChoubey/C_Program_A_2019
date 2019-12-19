/*write a program to enter P,R,T and find simple interest.*/
#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter value of P=");
    scanf("%f",&p);
     printf("Enter value of R=");
    scanf("%f",&r);
     printf("Enter value of T=");
    scanf("%f",&t);

    si=(p*r*r)/100;
    printf("Simple Interest=%9.2f",si);
    return 0;


}
