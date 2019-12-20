# include<stdio.h>
int main()
{
    int n,i,count=0,s=0;
printf("enter the number");
scanf("%d",&n);
 while(n>0)
{
    count++;
s=n%10;
n=n/10;


}
printf("%d",count);
return 0;
}
