/* Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter*/
#include<stdio.h>
int main()
{
    int l,b,p,area;
    printf("Enter length of rectangle=");
    scanf("%d",&l);
    printf("\nEnter breadth of rectangle=");
    scanf("%d",&b);
    p=2*(l+b);
    area=l*b;
    printf("Area=%d",area);
    printf("\nPerimeter=%d",p);


    if(area>p)
    {

    printf("\nArea of rectangle is greater");
    }
    else
    {

        printf("\nperimeter is greater");
    }
    return 0;
}
