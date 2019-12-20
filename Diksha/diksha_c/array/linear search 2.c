#include<stdio.h>
int main()
{
int a[7],i,flag=0,item;
printf("enter the elements of array");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
printf("enter the value to be search");
scanf("%d",&item);
for(i=0;i<7;i++)
{
if(a[i]==item)
{
flag++;

}
}
if (flag>0)
printf("item found at %d times",flag);
else
printf("item not found");

}
