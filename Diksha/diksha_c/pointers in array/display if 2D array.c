#include<stdio.h>
void display(int[],int,int);
void show(int(*a)[],int,int);
void print(int[][],int,int );
int main()
{
int a[3][4]={{1,2,3,4},
              {5,6,7,8},
              {9,0,1,6}
             };

display(a,3,4);
show(a,3,4);
print(a,3,4);
return 0;
}
void show(int(*a)[4],int row,int col)

{
int i,j;
int *p;
for(i=0;i<row;i++)
{
p=a+1;
for(j=0;j<col;j++)
printf("%d",*(p+j));

printf("\n");
}
printf("\n");
}
printf(int q[][4],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
    printf("\n");
}
