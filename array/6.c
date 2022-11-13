#include<stdio.h>
void main()
{
	int a[8],i,ele,b[1],n;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the ele....\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("Enter the element which you want to delete");
	scanf("%d",&n);
	for(i=n;i<ele;i++)				
	{
	//	if(a[n]!=0)
		{
		a[i]=a[i+1];	
		}
	}
	for(i=0;i<ele-1;i++)
	{
			
		printf("%d ",a[i]);
	}
	printf("\n");
}
