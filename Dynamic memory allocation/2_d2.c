#include<stdio.h>
void main()
{
int r,c,i,j,**p;
printf("Enter the row and coloum\n");
scanf("%d %d",&r,&c);

p=malloc(sizeof(int *)*r);

for(i=0;i<r;i++)
p[i]=malloc(sizeof(int *)*c);

for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf()

}
