#include<stdio.h>
int main()
{
  int n,n1,a,rev=0;
  printf("enter a number");
  scanf("%d",&n);
  n1=n;
  while(n>0)
  {
      a=n%10;
      rev=rev*10+a;
      n=n/10;
  }
  if(n1==rev)
    printf("number is palindrome");
  else
     printf("number is not palindrome");
  return 0;a
}
