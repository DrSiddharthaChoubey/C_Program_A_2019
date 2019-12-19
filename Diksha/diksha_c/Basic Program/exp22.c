/*write a C program to input p,t,r and calculate simple interest.*/
int main()
{
float p,r,t,si;
printf("enter principal rate and time ");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("simple interest is%f ",si);
return 0;
}
