#include<stdio.h>
int main()
{
    int ram,sayam,ajay;
    scanf("%d%d%d",&ram,&sayam,&ajay);
    if(ram<sayam && ram<ajay)
        printf("ram is youngest");
    else if(ajay<sayam && ajay<ram)
        printf("ajay is youngest");
    else if(sayam<ram && sayam<ajay)
        printf("sayam is youngest");
    return 0;
}
