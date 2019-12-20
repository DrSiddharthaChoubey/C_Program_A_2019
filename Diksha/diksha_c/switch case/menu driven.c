#include <stdio.h>
#include <stdlib.h>
int main()
{
int choice;
while(1)
{
printf("\n\t\tMENU\t\t");
printf("\n Factorial");
printf("\n Prime or Not");
printf("\n Odd or Even");
printf("\n Exit");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Factorial");
    break;
case 2:
printf("Prime or Not");
break;
case 3:
printf("Even or Odd");
break;
case 4:
exit(0);
default:
printf("enter the right choice");
}
}
return 0;
}
