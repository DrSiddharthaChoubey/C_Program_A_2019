#include<stdio.h>
int main()
{
    int unit=0;
    float charge=0.0;
    scanf("%d",&unit);
    if(unit<=50)
        charge=unit*0.50;
    else if(unit<=150)
        charge=25+(unit-50)*0.75;
    else if(unit<=250)
        charge=25+75+(unit-150)*1.20;
    else
        charge=25+75+120+(unit-250)*1.50;
    printf("charge=%f",charge);
    return 0;
}
