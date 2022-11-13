#include<stdio.h>
void main()
{
	int n,r,x,s,c;
	printf("Armstrong no are\n");
	for(n=1,c=0;n<=500;n++)
	{
		s=0;
		x=n;
		while(x!=0)
		{
			r=x%10;
			s=s+r*r*r;
			x=x/10;
		}
		if(s==n)
		{
			printf("%d ",n);
			c++;
		}
	}
	printf("c=%d",c);
}
