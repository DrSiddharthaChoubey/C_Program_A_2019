#include<stdio.h>
int main()
{
    int hr,otp,i;
    i=1;
    while(i<=10)
    {
        printf("\nEnter the hour working by employee %d:",i);
        scanf("%d",&hr);
        if(hr>40)
        {
            otp=(hr-40)*12;
            printf("over time pay to the employee %d",otp);

        }
        else
        {
            otp=0;
            printf("No over time will be given",i);

        }
        i++;
    }
}
