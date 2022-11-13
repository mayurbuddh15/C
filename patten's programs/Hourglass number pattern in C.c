#include<stdio.h>
void main(){
	int i,j,k,l=1,n;
//	printf("Enter the number\n");
//	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
		{
		printf(" ");
		}
			for(k=0;k<2*i-1;k++)
			{
				printf("%d",l++);
			}
			printf("\n");
l=1;
		
	}
	for(i=5;i>0;i--)
	{
		for(j=0;j<=5-i;j++)
		{
		printf(" ");
		}
		for(k=0;k<2*i-1;k++)
		{
		printf("%d",l++);
		}
	printf("\n");
l=1;
	}
}
