#include<stdio.h>
void main()
{
	int i,a[5],even,odd,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements....\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,even=0,odd=0;i<ele;i++)
	{
		a[i]%2==0?even++:odd++;
	}
	printf("total even numbers are %d\n",even);
	printf("total odd numbers are %d\n",odd);



















}
