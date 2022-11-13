#include<stdio.h>
void main(){
	int num,i,j,m,n;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=15;i>=0;i--)
		printf("%d",num>>i&1);
		printf("\n");
	for(i=0,j=8;i<8;i++,j++)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	for(i=15;i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
}
