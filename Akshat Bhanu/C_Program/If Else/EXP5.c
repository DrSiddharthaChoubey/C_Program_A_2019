/**/

#include<stdio.h>
int main()
{
    int n1,n2,n3,result;
    printf("\nEnter First no=");
    printf("\nEnter second no=");
    printf("\nEnter third no=");
    scanf("%d%d%d",&n1,&n2,&n3);

    if((n1>n2)&&(n1>n3))
        result=n1;
else if((n2>n1)&&(n2>n3))

    printf("\nGreater Number=%d",result);
    return 0;
}

