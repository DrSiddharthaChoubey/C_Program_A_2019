/*If a five digit number is input through keyboard, write a program to reverse the no.*/
int main()
{
    int n,n1,a,b,c,d,e,reverse;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    n1=n1/10;
    b=n1%10;
    n1=n1/10;
    c=n1%10;
    n1=n1/10;
    d=n1%10;
    n1=n1/10;
    e=n1%10;
    n1=n1/10;
    reverse=a*10000+b*1000+c*100+d*10+e;
    printf("Reverse of the number:%d",reverse);
    return 0;
}
