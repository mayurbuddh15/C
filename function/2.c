#include<stdio.h>
int bit_check(int);
void main()
{
	int n,c;
	printf("Enter the number");
	scanf("%d",&n);
	c=bit_check(n);
	printf("%d",c);
}
int bit_check(int n)
{
	int c,i;
	for(i=0,c=0;i<31;i++)
	{
		if(n&1<<i)
			c++;
	}
			return c;
}

