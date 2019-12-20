/**/
#include<stdio.h>
int main()
{
    int age;
    char ms,gender;
    printf("Enter the age,martial status(M/U),gender(M/U)");
    scanf("%d %c%c",&age,&ms,&gender);
    if(ms=='M')
        printf("You are appointed");
    else
    {
       if(gender=='M')

        {
            if(age>30)
                printf("You are not appointed");
            else
                printf("Not appointed");
        }
        else
    }



{


    if(gender=='F')

        {
        if(age>25)
            printf("You are appointed");
        else
            printf("Not appointed");
        }
}
    return 0;
}
