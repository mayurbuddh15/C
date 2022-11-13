#include<stdio.h>
void main()
{
	int *p;
	int a[5];
	int (*ptr)[5];
	p=a;
	ptr=&a;
	printf("p=%u,ptr=%u\n",p,ptr);
	p++;
	ptr++;
	printf("P=%u,ptr=%u\n",p,ptr);
	p++;
	ptr++;
	printf("P=%u,ptr=%u\n",p,ptr);
}
