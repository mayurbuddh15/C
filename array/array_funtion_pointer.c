#include<stdio.h>
void print(int ,int,int(*)[]);
void main()
{
int b[2][3]={{10,20,30},{40,50,60}};
int r,c;
r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][0]);
print(r,c,b);
}
void print(int r,int c,int(*b)[c])
{
int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d",b[i][j]);
}
