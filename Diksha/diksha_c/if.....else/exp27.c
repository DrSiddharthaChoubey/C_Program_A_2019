int main()
{
float a,b,c;
printf("enter the sides of triangle");
scanf("%f%f%f",&a,&b,&c);

 if(((a*a)+(b*b)==(c*c))||((b*b)+(c*c)==(a*a))||((a*a)+(c*c)==(b*b)))
printf("it is a right angle triangle");
else if((a==b)||(b==c)||(a==c))
printf("it is a equilateral triangle");
else if (((a==b)||(b!=c))||((a==c)||(a!=b)))
printf("it is a isosceles triangle");
else if((a!=b)||(b!=c)||(a!=c))
printf("it is a scalene triangle");
return 0;
}
