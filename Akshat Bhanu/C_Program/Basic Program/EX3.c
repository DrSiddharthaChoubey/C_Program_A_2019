/*If the marks obtain by the student in five subject are input through keyboard,find out aggregate marks and percentage marks obtained by
by the student ASSUME that maximum marks that can be obtained by student in each subject is 100.*/
#include<stdio.h>
int main()
{
    float eng,hindi,maths,science,it,tm,perc;
    printf("\nEnglish=");
    scanf("%f",&eng);
    printf("\nHindi=");
    scanf("%f",&hindi);
    printf("\nMaths=");
    scanf("%f",&maths);
    printf("\nScience=");
    scanf("%f",&science);
    printf("\nIT=");
    scanf("%f",&it);







    tm=eng+hindi+maths+science+it;
    perc=tm/500*100;

    printf("Percentage=%f",perc);
    return 0;

}
