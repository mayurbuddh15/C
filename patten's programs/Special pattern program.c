#include<stdio.h>
void main()
{
	int i,j,num; 
	printf("enter the num of raws= \n");
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			 if(i==num/2 && j==num/2)
		    		printf("D ");
			else if(i==0||j==0||j==num-1||i==num-1) 
			{

				printf("* "); 
			}
			else
				printf("  ");
		}
	
	printf("\n");

        }
}







