#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<5;i++)
	{
		for(j=-4;j<=4;j++)
		{
			k=j;
			if(k<0)
				k=-k;
	if(j==0)
	continue;
			if(5-k>i)
			{
				printf(" ");
			}
			else
			{
				printf("%d",5-k);
			}
		}
		printf("\n");
	}
}
