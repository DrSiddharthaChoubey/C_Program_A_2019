/**/
#include<stdio.h>
int main()
{
    int nod;
    float fine;
    printf("Enter no of late days");
    scanf("%d",&nod);
{

    if(nod>=1&&nod<=5)
        fine=nod*.5;
    else if(nod>=6&&nod<=10)
        fine=nod*1.00;
    else if(nod>11&&nod<=30)
        fine=nod*5.00;
    else
        printf("Your membership has been canceled");
}
    printf("Fine=%.2f",fine);
    return 0;

}
