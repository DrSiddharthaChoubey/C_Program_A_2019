#include<stdio.h>
int main()
{ int curryear,joinyear,bonus=0;
scanf("%d%d",&curryear,&joinyear);
if(curryear-joinyear>=3)
 bonus=2500;
    printf("bonus=%d",bonus);
return 0;

}
