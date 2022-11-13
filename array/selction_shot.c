#include<stdio.h>
void main()
{
	int i,j,ele,a[10],temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<ele-1;i++)
{
	for(j=i+1;j<ele;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<ele;i++)
{
printf("%d ",a[i]);
}
}
