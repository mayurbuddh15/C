#include<stdio.h>
void main(){
	int i,j,k,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{	
		for(j=0;j<n-1-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{	
			printf("* ");		
		}
printf("\n");
	}
}
