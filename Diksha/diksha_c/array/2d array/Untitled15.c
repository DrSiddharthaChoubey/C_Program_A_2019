#include<stdio.h>
# define MAX 10
int main()
{
int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,k,c1,r1,c2,r2,s=0;
printf("enter the size of r1");
scanf("%d",&r1);
printf("enter the size of c1");
scanf("%d",&c1);
printf("enter the size of r2");
scanf("%d",&r2);
printf("enter the size of c2");
scanf("%d",&c2);
if(c1==r2)
{
printf("enter the array elements");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);

}
printf("array elemets are");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf("%d",a[i][j]);
printf("\n");
}

printf("enter the array elements");

for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}


printf(" the array elements");

for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)

printf("%d",b[i][j]);
printf("\n");
}

for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
s=0;
for(k=0;k<r1;k++)
s=s+(a[i][k]*b[k][j]);
c[i][j]=s;
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
printf("%d",c[i][j]);
printf("\n");
}
return 0;
}
}
