#include<stdio.h>
int main()
{
  int n,n1,first,last;
  printf("enter a number");
  scanf("%d",&n);
  n1=n;
  last=n%10;
  first=n;
  while(first>10)
  {
      first=first/10;
  }
     printf(" first digit=%d and last digit=%d",first,last);
  return 0;
}

