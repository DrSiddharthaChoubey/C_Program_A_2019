#include<stdio.h>
int main()
{
    int men,women,literate,literatemen,literatewomen,illiteratemen,illiteratewomen,totalpopulation=80000;
    men=0.52*totalpopulation;
    literate=0.48*totalpopulation;
    literatemen=0.32*totalpopulation;
    illiteratemen=men-literatemen;
    women=totalpopulation-men;
    literatewomen=literate-literatemen;
    illiteratewomen=women-literatewomen;
    printf("illiterate men=%d",illiteratemen);
    printf("\n illiterate women=%d",illiteratewomen);
    return 0;

}
