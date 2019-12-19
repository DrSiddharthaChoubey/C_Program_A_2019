#include<stdio.h>
int main()
{
    int hr,otp,i;
    i=1;
    while(i<=10)
    {
        printf("\n enter the working hours by employee %d=",i);
        scanf("%d",&hr);
    if(hr>40)
    {
        otp=(hr-40)*12;
        printf("\n overtime pay for employee %d = %d",i,otp);
    }else
    {
        otp=0;
        printf("\n overtime pay for employee %d = %d",i,otp);
    }
    i++;
    }
 return 0;
}
