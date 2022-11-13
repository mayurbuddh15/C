#include<stdio.h>
void swap(int *p,int *q)

{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
void main()
{
	int i=10,j=20;
	printf("before swaping i=%d and j=%d\n",i,j);
	swap(&i,&j);
	printf("after swaping i=%d and j=%d\n",i,j);
}
