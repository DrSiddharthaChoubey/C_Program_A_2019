# include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the numbers");
scanf("%d",&n);
for ( i=1;i<=n;i++)
{
if(i%2==0)
s=s+i;
}
printf(" the sum is %d",s);

return 0;

}
