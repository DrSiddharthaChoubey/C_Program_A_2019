#include<stdio.h>
int main()
{
  int n,n1,first,last,sum=0;
  printf("enter a number");
  scanf("%d",&n);
  n1=n;
  last=n%10;
  first=n;
  while(first>10)
  {
      first=first/10;
  }
  sum=first+last;
     printf("sum of first and last digit=%d",sum);
  return 0;
}
