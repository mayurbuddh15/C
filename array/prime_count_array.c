#include<stdio.h>
void main()
{
	int a[5],c,j;
	int i,ele;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements...\n");	
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<ele;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");

	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(j==a[i])
		{
			printf("%d ",a[i]);
			c++;
		}
		printf("\n");

	}
	printf("c=%d\n",c);
}
