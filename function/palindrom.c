#include<stdio.h>
int palindrom(int);
void main()
{
	int n,c;
	printf("Enter the number\t");
	scanf("%d",&n);
	c=palindrom(n);
	printf("%d\n",c);
}
int palindrom(int n)
{
	int n1,a,c,s;
	for(n1=n,s=0;n1!=0;n1=n1/10)
	{
		a=n%10;
		s=s*10+a;
	}
	if(s==n)
		return 1;

	else
		return 0;
}


