#include<stdio.h>
void main()
{
	int a[5],ele,j,l,k,sl,i,sm,ss;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{	
		if(a[0]>a[1])
		{
			l=a[0];
			sl=a[1];	
		}
		else if(a[1]>a[0])
			{
			l=a[1];
			sl=a[0];
			}
	for(k=0;k<ele;k++)
	{
		if(a[k]>l)
		{
			sl=l;
			l=a[k];
		}
		else if(a[k]>sl)
		{
			sl=a[k];
		}
	}
	}
	printf("l=%d\n",l);
	printf("sl=%d\n",sl);	
//	for(j=0;j<ele;j++)
		
	for(i=0;i<ele;i++)
	{	
		if(a[0]<a[1])
		{
			sm=a[0];
			ss=a[1];	
		}
		else if(a[1]<a[0])
		{
			sm=a[1];
			ss=a[0];
		}

	for(k=0;k<ele;k++)
	{
		if(a[k]<sm)
		{
			ss=sm;
			sm=a[k];
		}
		else if(a[k]<ss)
		{
			ss=a[k];
		}
	}
	}
	printf("sm=%d\n",sm);
	printf("ss=%d\n",ss);
}
