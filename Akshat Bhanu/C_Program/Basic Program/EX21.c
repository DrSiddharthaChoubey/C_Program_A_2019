/*write a program to enter marks of five subject and find total,average and percentage */
#include<stdio.h>
int main()
{
    int eng,maths,hindi,science,it,avg,total;
    float per;

    printf("English=");
    scanf("%d",&eng);
    printf("Maths=");
    scanf("%d",&maths);
    printf("Hindi=");
    scanf("%d",&hindi);
    printf("Science=");
    scanf("%d",&science);
    printf("IT=");
    scanf("%d",&it);
    total=eng+maths+hindi+science+it;
    avg=total/5;
    per=(total*100)/500;

    printf("\nAverage=%d",avg);
    printf("\nTotal=%d",total);
    printf("\nPercentage=%f",per);
    return 0;

}
