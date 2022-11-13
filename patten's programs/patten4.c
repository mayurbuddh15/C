#include<stdio.h>
void main()
{

int i,j,k;

for(i=1;i<=6;i++)
	{
	for(j=0;j<i-1;j++)
	{
	printf(" ");
	}
	for(k=0;k<6*2-(i+j);k++)
	{
	printf("*");
	}
	printf("\n");
j++;
	}

for(i=2;i<7;i++)
	{
	for(j=0;j<6-i;j++)
	{
	printf(" ");
	}
	for(k=0;k<2*i-1;k++)
	{
	printf("*");
	}
	printf("\n");
}
}

