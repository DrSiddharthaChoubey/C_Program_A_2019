
#include<stdio.h>
int main()
{
    char ms,sex,age;
    scanf("%c%c%d",&ms,&sex,&age);
    if(ms=='M')
        printf("driver is insured");
    else{
    if(sex=='m')
    {
        if(age>30)
            printf("driver is insured");
        else
        printf("driver is not insured");
    }else
    if(age>25)
         printf("driver is insured");
        else
        printf("driver is not insured");
    }
    return 0;
}
