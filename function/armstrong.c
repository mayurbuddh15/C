#include<stdio.h>
int armstrong(int);
void main()
{
	int n,c;
	printf("Enter the number");
	scanf("%d",&n);
	c=armstrong(n);
	printf("%d",c);
}
int armstrong(int n)
{
	int x,s,r;
	x=n;
	s=0;
	while(x)
	{
		r=x%10;
		s=s+r*r*r;
		x=x/10;
	}
	if(s==n)
		return 1;
	else 
		return 0;
}
