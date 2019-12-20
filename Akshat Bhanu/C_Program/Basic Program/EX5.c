/*The length and breadth of a rectangle and radius of circle are input through keyboard.Write a program to calculate the area and parimeter
of a rectangle and area and circumference of circle*/

#include<stdio.h>
int main()
{
    int l,b,r,a1,p;
    float a2,c;
    printf("enter value of length=");
    scanf("%d",&l);

     printf("enter value of breadth=");
    scanf("%d",&b);
     a1=l*b;
     printf("Area of rectangle=%9.2d\n",a1);
     p=2*(l+b);
     printf("Perimeter of rectangle=%9.2d\n",p);



     printf("enter value of radius=");
     scanf("%d",&r);
     a2=3.14*r*r;
     printf("Area of circle=%9.2f\n",a2);
     c=2*3.14*r;
     printf("Circumference of Circle=%9.2f\n",c);

     return 0;
}
