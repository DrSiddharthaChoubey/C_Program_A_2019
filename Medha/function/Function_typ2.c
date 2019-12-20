//argument,no return type//
void add(int,int);
int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    int s;
    s=x+y;
    printf("Addition of %d and %d=%d",x,y,s);
}
