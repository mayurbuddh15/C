#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter the number\n");	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d ",j*2);
			}
			else
			{
				printf("%d ",j*2-1);
			}
		}
		printf("\n");
	}
}
