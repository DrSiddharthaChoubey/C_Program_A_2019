#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the age of ram shyam and ajay");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)
printf("ram is youngest");
else if(b<a&&b<c)
printf("shyam is youngest");
else
printf("ajay is youngest");
return 0;
}
