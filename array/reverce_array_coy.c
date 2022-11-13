#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50},i,ele;
	int b[i];
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		b[i]=a[i];

	printf("--------a--------\n");
		for(i=0;i<ele;i++)
			printf("%d\n",a[i]);

	printf("-------b---------\n");
		for(i=ele-1;i>=0;i--)
		{
			printf("%d\n",b[i]);
		}
}
