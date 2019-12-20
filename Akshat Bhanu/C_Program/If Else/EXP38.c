/**/
#include<stdio.h>
int main()
{
    int sal,yos;
    char gen,qual;
    printf("\nEnter Gender(M/F) and Qualification:");
    scanf("%c%c",&gen,&qual);
    printf("\nEnter year of service:");
    scanf("%d",&yos);


    if(gen=='M'&&yos>=10&&qual=='1')
        sal=15000;
    else if(gen=='M'&&yos>=10&&qual=='0')
        sal=10000;
    else if(gen=='M'&&yos<10&&qual=='1')
        sal=10000;
    else if(gen=='M'&&yos<10&&qual=='0')
        sal=7000;
    else if(gen=='F'&&yos>=10&&qual=='1')
        sal=12000;
    else if(gen=='F'&&yos>=10&&qual=='0')
        sal=9000;
    else if(gen=='F'&&yos<10&&qual=='1')
        sal=10000;
    else if(gen=='F'&&yos<10&&qual=='0')
        sal=6000;
        else
            sal=0;
        printf("Salary=%d",sal);
        return 0;

}
