//no argument,return type//
int add();
int main()
{
    int sum;
    sum=add();
    printf("addition=%d",sum);
    return 0;
}
int add()
{
    int a,b,s;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    s=a+b;
    return (s);
}
