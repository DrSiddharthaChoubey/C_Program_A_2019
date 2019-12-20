#include<stdio.h>
int main()
{
    int maths,eng,hindi,science,sst,total;
    float avg,per;
    scanf("%d",&maths);
       scanf("%d",&eng);
          scanf("%d",&hindi);
             scanf("%d",&science);
                scanf("%d",&sst);
                total=maths+sst+eng+science+hindi;
                avg=total/5;
                per=((float)total/500.0)*100.0;
                printf("\n total marks=%d",total);
                 printf("\n average marks=%f",avg);
                  printf("\n percentage=%f",per);
                  return 0;


}
