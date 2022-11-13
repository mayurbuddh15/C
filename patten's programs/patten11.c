#include<stdio.h>
void main()
{
int i,j,k,l;

for(i=1;i<=5;i++)
	{l=i;
	for(j=1,k=4;j<=i;j++,l=l+k,k--)
		{
		printf("%d",l);
		}
	printf("\n");
	}



}
