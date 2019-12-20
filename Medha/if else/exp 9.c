#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,s1,s2,s3;
    scanf("%d%d",&x1,&y1);
       scanf("%d%d",&x2,&y2);
          scanf("%d%d",&x3,&y3);
                s1=abs(y2-y1)/abs(x2-x1);
                s2=abs(y3-y2)/abs(x3-x2);
                s3=abs(y1-y3)/abs(x1-x3);
                if(s1==s2&&s3==s2)
                    printf("points are lie in a line");
                else
                    printf("points are not lie in a line");
                return 0;
}
