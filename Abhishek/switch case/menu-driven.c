#include<stdio.h>
int main()
{   int n,choice,i,f=1,d=0;
    printf("\n===================================================");
    printf("\n============           MENU        ================");
    printf("\n===================================================");
    printf("\n===== 1.factorial                   ===============");
    printf("\n===== 2.prime number or not         ===============");
    printf("\n===== 3.odd or even                 ===============");
    printf("\n===== 4.exit                        ===============");
    printf("\n===================================================");
    printf("\n enter a number=");
    scanf("%d",&n);
    printf("enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: for(i=1;i<=n;i++)
                  f=f*i;
                  printf("factorial of %d =%d",n,f);
                  break;
        case 2: for(i=1;i<=n/2;i++)
                  if(n/i==0)
                  {  d=1;
                      break;
                  }
                  else
                    d=0;
                  if(d==0)
                    printf("prime number");
                  else
                    printf("not prime");
                    break;
        case 3: if(n%2==0)
                  printf("%d is even",n);
                  else
                    printf("%d is odd",n);
                  break;
        case 4: printf("YOU CHOOSE TO EXIT");
                 exit(0);
                  break;
        default: printf("INVALID CHOICE");
                  break;

    }
    return 0;
}
