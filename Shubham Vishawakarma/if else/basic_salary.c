#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        hra=bs*0.2;
        da=bs*0.8;
    }
    else
    {
        if(bs<=20000)
        {
        hra=bs*0.25;
        da=bs*0.9;
    }
    else
        if(bs>20000)
        {
        hra=bs*0.3;
        da=bs*0.95;
        }
    }
        printf("gross salary=%f",bs+da+hra);
        return 0;
}
