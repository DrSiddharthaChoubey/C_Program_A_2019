/**/
#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter Basic salary=");
    scanf("%f",&bs);



    if(bs<1500)
       {

        hra=.1*bs;
        da=.9*bs;
        }
    else
{


        hra=500;
        da=.98*bs;
}
       gs=bs+hra+da;
       printf("\nHRA=%.2f",hra);
       printf("\nDA=%.2f",da);
       printf("\nGross Salary=%.2f",gs);
      return 0;
}
