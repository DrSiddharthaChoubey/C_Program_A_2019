#include<stdio.h>
int main()
{
    float r,dia,cir,area;
    scanf("%f",&r);
    dia=2*r;
    cir=2*3.14*r;
    area=3.14*r*r;
    printf("\n diameter=%f",dia);
    printf("\n circumference=%f",cir);
    printf("\n area=%f",area);
    return 0;
}
