#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2,x3,y3,s1,s2,s3;
printf("enter the co ordinates of three points");
scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&x3,&y3);
s1=abs(y2-y1)/abs(x2-x1);
s2=abs(y3-y1)/abs(x3-x1);
s3=abs(y3-y2)/abs(x3-x2);
if(s1==s2&&s2==s3)
printf("the points are in straight line");
else
printf("the points are not in straight line");
return 0;
}
