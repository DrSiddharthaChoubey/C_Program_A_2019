# include<stdio.h>
int main()
{
    int n,i,count=0,s=0,sum=0;
printf("enter the number");
scanf("%d",&n);
 while(n>0)
{
    count++;

s=n%10;
n=n/10;           /*last=n%10;
                   while(first>10);
                first=first/10;
                  sum=first+last;*/
if(count==1)
    {
printf("the last digit is %d\n",s);
sum=sum+s;
}


}
printf("the first digt is %d\n",s);
sum=sum+s;
printf("the sum is %d",sum);
return 0;
}


