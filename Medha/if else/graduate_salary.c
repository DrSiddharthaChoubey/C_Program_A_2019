#include<stdio.h>
int main()
{
    char sex,qual;
    int yos,salary;
    scanf("%c %d %c",&sex,&yos,&qual);
    if(sex=='m')
    {
        if(yos>=10)
        {
            if(qual=='p')
                salary=15000;
            else
                salary=10000;
        }else
        {
             if(qual=='p')
                salary=10000;
            else
                salary=7000;
        }

    }else
    {
         if(yos>=10)
        {
            if(qual=='p')
                salary=12000;
            else
                salary=9000;
        }else
        {
             if(qual=='p')
                salary=10000;
            else
                salary=6000;
        }
    }
    printf("salary=%d",salary);
    return 0;
}
