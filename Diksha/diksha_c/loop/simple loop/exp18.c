# include<stdio.h>
int main()
{
    int n,i,m=0;
printf("enter the numbers");
scanf("%d",&n);
for ( i=1;i<=10;i++)
{
m=n*i;
printf("%d*%d=%d\n",n,i,m);
}
return 0;
}
