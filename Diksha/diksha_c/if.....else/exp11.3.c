/**/
#include<stdio.h>
int main()
{
int age;
char ms,gender;
printf("enter the age marital status(M/U) and gender(M/F) ");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='M')
printf("the driver is insured");
 if(ms=='U'&&gender=='M'&&age>30)
printf("the driver is insured");
if(ms=='U'&&gender=='F'&&age>25)
 printf("the driver is insured");
return 0;
}
