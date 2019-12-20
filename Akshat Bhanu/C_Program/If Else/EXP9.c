/**/
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,a1,a2,a3;
    printf("Enter first point(x1,y1)=");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter first point(x2,y2)=");
    scanf("%d%d",&x2,&y2);
    printf("\nEnter first point(x3,y3)=");
    scanf("%d%d",&x3,&y3);
    a1=(y2-y1)/(x2-x1);
    a2=(y3-y2)/(x3-x2);
    a3=(y1-y3)/(x1-x3);
    if(a1==a2==a3)
        printf("Given points are collinear");
    else
        printf("They are not collinear");
        return 0;
}
