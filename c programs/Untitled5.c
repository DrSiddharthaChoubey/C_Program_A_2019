#include<stdio.h>
#include<conio.h>
int main()
{
  int a=10 , b=3 ,c=0 ;
  c=a&b;
  printf("%d",c);
  c=a|b;
  printf("%d",c);
  c=a^b;
  printf("%d",c);
  c=~a;
  printf("%d",c);
  c=~b;
  printf("%d",c);
  c=a<<b;
  printf("%d",c);
  c=a>>b;
  printf("%d",c);

  return 0;



}



