#include<stdio.h>
int even(int);
int odd(int);
int main()
{
int a,e,o;
printf("enter the value of a ");
scanf("%d",&a);
e=even(a);
o=odd(a);

printf("the even number  is %d ",e);
printf("the odd number is %d ",o);
return 0;
}
int even(int a)
{

if(a%2==0)
return(a);
else
    return 0;


}
int odd(int a)
{

if(a%2!=0)
return(a);
else
    return 0;

}

