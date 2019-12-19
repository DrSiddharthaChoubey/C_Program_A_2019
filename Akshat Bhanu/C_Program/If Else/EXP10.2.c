
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
     if(avg>=60)
      printf("First Division");
     if(avg<60&&avg>50)
        printf("Second Division");
     if(avg>50&&avg<40)
        printf("Third Division");
    if(avg<40)
        printf(":(FAIL:(");

    return 0;

}

