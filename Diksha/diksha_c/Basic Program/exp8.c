/*if a five digit number is input through the keyboard,write a program to reverse the number*/
#include<stdio.h>
 int main()
 {
 int n,a,b,c,d,e,rev=0;
 printf("enter a number");
 scanf("%d",&n);
 printf("the number is=%d",n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n%10;
n=n/10;
rev=a*10000+b*1000+c*100+d*10+e;
printf("the reverse of the number is=%d",rev);
return 0;
}
