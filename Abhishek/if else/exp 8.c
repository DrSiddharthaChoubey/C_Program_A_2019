#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area<perimeter)
        printf("perimeter is greater");
    else
        printf("perimeter is smaller");
    return 0;
}
