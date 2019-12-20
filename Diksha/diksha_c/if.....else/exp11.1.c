/**/
#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age marital status(M/U) and gender(M/F) ");
scanf("%d%c%c",&age,&ms,&gender);
if(ms=='M')
printf("the driver is insured");
else
{
if(gender=='M')
{
if (age>30)
printf("the driver is insured");

 else


printf("the driver is not insured");
}
else
{
 if(age>25)
    printf("the driver is insured");
else

printf("the driver is not insured");
}
}


return 0;
}
