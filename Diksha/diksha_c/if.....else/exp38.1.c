/**/
#include<stdio.h>
int main()
{
int yos, qual,sal;
char gender;
printf("enter the year of service ,qualifications and gender(M/F) ");
scanf("%d%d%c",&yos,&qual,&gender);
if(gender=='M')
{
 if(qual==1)
 {
   if(yos>=10)
   sal=15000;
    else
sal=10000;
}
else
{
if(yos>=10)
sal=10000;
else
sal=7000;
}
if(gender=='F')
{
if(yos>=10)
sal=12000;
else
sal=10000;
}
else
{
if(yos>=10)
sal=9000;
else
sal=6000;
}
printf("the salary is%d",sal);
return 0;

}
