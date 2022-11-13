#include<stdio.h>
void main()
{
	char a[7],ch;
	int i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the charcter\n");
	for(i=0;i<ele-2;i++)
	scanf(" %c",a+i);
		
	printf("Enter the element that you want to insert\n");
	scanf(" %c",&ch);
	printf("Enter the location number that you want to insert\n");
	scanf(" %d",&j);

	for(i=ele-2;i>=j;i--)
	{
		a[i+1]=a[i];
	}
	a[j]=ch;
	for(i=0;i<ele-1;i++)
		printf("%c",a[i]);
		printf("\n");
}
