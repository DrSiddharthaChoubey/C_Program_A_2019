#include<stdio.h>
int main()
{
    int a, b, c,d,e;
    float per;
    printf("\n enter five subject no.");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    per=(float)((a+b+c+d+e)/5);
    if (per>90)
        printf("\n grade is A");
    else
    {


        if(per>=60);
        {
            printf("\n grade is B");
    }
    else
        printf("\n fail");
    }
    return 0;

}

