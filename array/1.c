#include<stdio.h>
void main()
{
	int s[5],i,k=1,j=0,ele;
	ele=sizeof(s)/sizeof(s[0]);
	printf("Enter the elemnets");
	for(i=0;i<ele;i++)	
		scanf("%d",&s[i]);
	for(i=0,j=0;i<ele;i++)
	{
		if(s[i]%2!=0)
		{		j=s[i]+j;
		}
		else
		{
			k=s[i]*k;	
		}

	}
	printf("product of odd number is %d\n",k);
	printf("addition of even number is %d\n",j);
}
