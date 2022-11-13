#include<stdio.h>
void main()
{
int b[2][3];
int r,c,i,j;

r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][0]);

printf("Enter the ele.\n");

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r;i++)
for(j=0;j<c;j++)
printf("%d",b[i][j]);


}
