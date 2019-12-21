#include<stdio.h>
int main()
{
    int phy,chem,maths,bio,cs;
    float per;
    scanf("%d%d%d%d%d",&phy,&chem,&maths,&bio,&cs);
    per=(phy+chem+maths+bio+cs)/5.0;
    if(per>=90)
        printf("GRADE A");
    else if(per>=80)
        printf("GRADE B");
    else if(per>=70)
        printf("GRADE C");
    else if(per>=60)
        printf("GRADE D");
    else if(per>=40)
        printf("GRADE E");
        else
          printf("fail");
        return 0;
}
