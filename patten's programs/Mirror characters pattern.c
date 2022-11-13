#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='E';
	for(i=0;i<5;i++)
	{
		for(j=-4;j<=4;j++)
		{
			k=j;
		if(k<0)
			k=-k;
			if(i<=k)
			{
				printf("%c",'E'-k);
			}
				else
				{
					printf(" ");
				}
			
		}
		printf("\n");
	}

}
