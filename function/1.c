#include<stdio.h>
void print_binary(int);
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	print_binary(num);
}
void print_binary(int num)
{
	int pos;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
	}
		printf("\n");
}
