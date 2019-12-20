#include<stdio.h>

double dia(double radii);
double circ(double radii);
double area(double radii);

int main()
{
    double num,c,d,a,radii;
    printf("Enter the value of radius");
    scanf("%lf",&radii);
    c=circ(radii);
    a=area(radii);
    d=dia(radii);
    printf("\ncircumference of circle with radius %lf=%lf",radii,c);
    printf("\nArea of circle with radius %lf=%lf",radii,a);
    printf("\nDiameter of circle of radius %lf=%lf",radii,d);
    return 0;

}



{   double circ(double radii)
    double circ;
    return(2*3.14*radii);
}
    {double area(double radii)
    double area;
    return(3.14*radii*radii);
    }
    {double dia(double radii)
    double dia;
    return(2*radii);
    }



