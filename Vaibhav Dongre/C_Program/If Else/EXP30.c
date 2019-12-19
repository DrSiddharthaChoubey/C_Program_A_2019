#include<stdio.h>
int main()
{
    int phy,maths,bio,chem,comp,avg,total;
    char grade;
    float per;

    printf("Physics=");
    scanf("%d",&phy);
    printf("Maths=");
    scanf("%d",&maths);
    printf("Biology=");
    scanf("%d",&bio);
    printf("Chemistry=");
    scanf("%d",&chem);
    printf("Computer=");
    scanf("%d",&comp);
    total=phy+maths+bio+chem+comp;
    per=total/5;
    if(per>=90)
        grade='A';
        else if(per>=80)
        grade='B';
    else if(per>=70)
        grade='C';
    else if(per>=60)
        grade='D';
    else if(per>=40)
        grade='E';
    else if(per<40)
        grade='F';





    printf("\ngrade=%c",grade);
    printf("\nPercentage=%.2f",per);
    return 0;
}
