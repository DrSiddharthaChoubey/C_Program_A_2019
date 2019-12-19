#include<stdio.h>
void display(int[],int);
int main()
{
int a[5]={2,3,4,5,6};
int i;
display(a,5);
return 0;
}
void display (int x[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",x[i]);
}

