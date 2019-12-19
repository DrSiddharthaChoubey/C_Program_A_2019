#include<stdio.h>
first(){
printf("\n first line");
 }
second(){ first();
printf("\n second line");
 }
int main()
{
    first();
    second();
}
