#include<stdio.h>
void main()
{

int i,j,k=1,l=0;

for(i=1;i<=6;i++)
{
	for(j=0;j<i;j++)
	if(j%2==0)
{
	printf("%d",k);
}
	else
	printf("%d",l);
	printf("\n");
}

}
