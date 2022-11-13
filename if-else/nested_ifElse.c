#include<stdio.h>
void main()
{
	int mark,i=3;
m1:
	printf("Enter the mark");
	scanf("%d",&mark);
	if(mark<=100)

		if(mark>40)
		{
			if(mark>55)
			{

				if(mark>66)
				{
					if(mark>75)
						printf("A");
				}
				else
					printf("B");

			}
			else
				printf("C");


		}
		else
			printf("fail");
	else
	{
		printf("invalid i/p\n");
		
		if(i>1)
		{

			i--;
		printf("remaning attempts=%d\n",i);
		goto m1 ;
		}
	}
}

