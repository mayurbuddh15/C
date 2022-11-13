#include<stdio.h>
void bubble_short(int *p,int n);
void print_array(const int *p,int k);
void main()
{
	int a[5]={66,32,88,1,6},ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("befor shorting\n");
	print_array(a,ele);
	bubble_short(a,ele);
	printf("after shorting\n");
	print_array(a,ele);
}
void bubble_short(int *p, int ele)
{
	int i,j,t;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}
void print_array(const int *p,int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%d ",*p++);
	}
		printf("\n");
}
