/**/
#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter Basic salary=");
    scanf("%f",&bs);


     if(bs<=10000)
     {


        hra=.2*bs;
        da=.8*bs;
     }
     else if(bs<=20000)
     {


        hra=.25*bs;
        da=.9*bs;
     }
     else if(bs>20000)
     {


        hra=.3*bs;
        da=.95*bs;
     }
       gs=bs+hra+da;
       printf("\nHRA=%.2f",hra);
       printf("\nDA=%.2f",da);
       printf("\nGross Salary=%.2f",gs);
      return 0;
}

