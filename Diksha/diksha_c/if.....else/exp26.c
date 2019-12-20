int main()
{
float a,b,c;
printf("enter the sides of triangle");
scanf("%f%f%f",&a,&b,&c);
if((a+b>=c)||(b+c>=a)||(a+c>=b))
printf("it is a valid triangle");
else
printf("it is a not valid triangle");

return 0;
}
