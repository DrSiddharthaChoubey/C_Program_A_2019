/**/
#include<stdio.h>
int main()
{
int yos,qual,sal;
char gender;
printf("enter the year of service ,qualifications and gender(M/F) ");
scanf("%d%d%c",&yos,&qual,&gender);
if(gender=='M'&&yos>=10&&qual==1)
sal=15000;
else if((gender=='M'&&yos>=10&&qual==0))
sal=10000;
else if(gender=='M'&&yos<10&&qual==0)
 sal=7000;
 else if(gender=='F'&&yos<10&&qual==0)
 sal=6000;
 else if(gender=='F'&&yos<10&&qual==1)
 sal=9000;
 else if(gender=='F'&&yos>=10&&qual==1)
 sal=12000;

printf("%d",sal);
return 0;
}
