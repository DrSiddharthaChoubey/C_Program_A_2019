#include<stdio.h>
int main()
{
    int p=0,n=0,z=0,num;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        printf("\n enter number=");
        scanf("%d",&num);
        if(num>0)
        p++;
        else
         if(num<0)
          n++;
        else
            z++;
        printf("\n do you want to enter another number(y/n)=");
        scanf(" %c",&ch);
    }
    printf("\n number of positive number=%d",p);
    printf("\n number of negative number=%d",n);
    printf("\n number of zero=%d",z);
    return 0;
}

