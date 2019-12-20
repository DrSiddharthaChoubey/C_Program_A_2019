//no argument,no return type//
void add();
int main()
{
    add();
    return 0;
}
void add()
{

int a,b,s;
printf("Enter value of a and b");
scanf("%d%d",&a,&b);

s=a+b;
printf("Addition of %d and %d = %d",a,b,s);

}
