#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	if(num%2==0)
	{
		if((num&(num-1))==0)
		{
			printf("power of 2\n");
		}
		else
		{
			printf("Even..\n");
		}
	}
	else
		printf("odd\n");


}
