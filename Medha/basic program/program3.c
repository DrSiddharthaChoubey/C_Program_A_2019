#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    scanf("%f",&bs);
    if(bs<1500)
    {
    hra=0.10*bs;
    da=0.9*bs;
    }
    else
    {
        hra=500;
        da=0.98*bs;
    }
    gs=hra+da+bs;
    printf("\n BASIC SALARY=%f",bs);
    printf("\n HRA=%f",hra);
    printf("\n DA=%f",da);
    printf("\n GROSS SALARY=%f",gs);
    return 0;
}
