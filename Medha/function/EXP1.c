#include<stdio.h>

double cube(double num);

int main()
{
    double num,c;
    printf("Enter the value of num");
    scanf("%lf",&num);
    c=cube(num);
    printf("Cube of %lf=%lf",num,c);
    return 0;

}
double cube(double num)
{
    double cube;
    cube=num*num*num;
    return(cube);
}
