/*write a program to enter marks of five subjects and calculate total area and percentage.*/int main()
{
int a,b,c,d,e,tot,avg,per;
printf("enter marks of five subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=a+b+c+d+e;
avg=(a+b+c+d+e)/5;
per=tot*0.2;

printf("total marks %d ",tot);
printf("average marks %d ",avg);
printf("percentage marks %d ",per);
return 0;
}
