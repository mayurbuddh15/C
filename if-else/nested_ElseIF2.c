#include<stdio.h>
void main()
{
int number,i=3;
m1:
printf("Enter the number");
scanf("%d",&number);
if(number>5)
{
	if(number>24)
	{
		if(number>49)
		{
			if(number>59)
			{
				if(number>75)
				{
					printf("this is smart students-A++ betch");
				}
				else
				{
					printf("group-C");
				}
			}
			else	
			{
			printf("groupr-C student");
			}
			
		}
		else
		{
		printf("group-B student");
		}
	}
	else
	printf("group-A student");
}
else
{
printf("invalid student details\n");
if(i>1)
{
i--;
printf("remains are %d\n",i);
goto m1;
}
}
}

