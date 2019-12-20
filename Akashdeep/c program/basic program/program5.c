/* To find area and perimeter of rectangle and area and circumference of circle*/


#include<stdio.h>
int main()
{
    int l,b,r;
    int area,perimeter;
    float areac,circumference;
    printf("enter the length, breadth and radius=");
    scanf("%d%d%d",&l,&b,&r);
    area=l*b;
    perimeter=2*(l+b);
    areac=3.14*r*r;
    circumference=2*3.14*r;
    printf("\n %d",area);
     printf("\n %d",perimeter);
      printf("\n %f",areac);
       printf("\n %f",circumference);
       return 0;
}
