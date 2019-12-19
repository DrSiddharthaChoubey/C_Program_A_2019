#include<stdio.h>
int max(int,int);
int min(int,int);
int main()
{
int a,b,m,mi;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
m=max(a,b);
mi=min(a,b);
printf("the max of %d ans %d is %d",a,b,m);
printf("the min of %d ans %d is %d",a,b,mi);
return 0;
}
int max(int a,int b)
{
int m;
if(a>b)
return(a);

else

return(b);
}
int min(int a,int b)
{
int mi;
if(a>b)
return(b);

else

return(a);
}

