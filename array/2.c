#include<stdio.h>
void main()
{
	int a[5],i,b,ele,l,sl;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	if(a[0]>a[1])
	{
		l=a[0];
		sl=a[1];
	}
	else
	{
		l=a[1];
		sl=a[0];
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]>l)
		{
		sl=l;
		l=a[i];
		}
		else if(a[i]>sl) 
		{
		sl=a[i];
		}
	}
	printf("l=%d sl= %d\n",l,sl);
}
