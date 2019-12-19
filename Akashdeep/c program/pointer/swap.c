/*
#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);                               ///call by value
    printf("\n before swapping a=%d b=%d",a,b);
    swap(a,b);
    printf("\n after swapping a=%d b=%d",a,b);
    return 0;
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);                               ///call by reference
    printf("\n before swapping a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\n after swapping a=%d b=%d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

