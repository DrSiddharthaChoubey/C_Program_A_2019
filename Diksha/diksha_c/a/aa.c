#include<stdio.h>
int main()
{
int a[10],i,j,temp;

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n Ascending order:\n");
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(i=0;i<10;i++){
    printf("\n %d",a[i]);}
return 0;
}
