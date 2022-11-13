#include<stdio.h>
int prime_check(int);
void main()
{
	int n,c;
	printf("Enter the number\t");
	scanf("%d",&n);
	c=prime_check(n);
	if(c==1)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
}
int prime_check(int n)
{
	int i,c;
	for(i=2,c=0;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
	{
		c++;
	}
	return c;
}
