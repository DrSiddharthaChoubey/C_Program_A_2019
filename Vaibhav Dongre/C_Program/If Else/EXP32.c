#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter unit");
    scanf("%d",&unit);
    if(unit<=50)
        bill=unit*.50;
    else if(unit<=100)
        bill=unit*.75;
    else if(unit>100&&unit<=250)
        bill=unit*1.2;
    else if(unit>250)
        bill=(unit*1.5)+(bill*.2);
    printf("total bill of unit %d is %f",unit,bill);
    return 0;

}
