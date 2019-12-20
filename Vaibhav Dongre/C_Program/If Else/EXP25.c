#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("Enter angles of a triangle:");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
        printf("Its a valid angle of a triangle");
    else
        printf("It is not a valid angle");
        return 0;

}
