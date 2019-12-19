/**/

#include<stdio.h>
int main()
{
    int n1,n2,result;
    printf("\nEnter First no=");
    printf("\nEnter second no=");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
        result=n1;

    printf("\nGreater Number=%d",result);
    return 0;
}
