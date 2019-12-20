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
    else if(gender=='M'&&age>30)
        printf("You are appointed");
    else if(gender=='F'&&age>25);

    else
    printf("You are not appointed");


    return 0;
}
