#include<stdio.h>
void main()
{
	int a[5],b[5],ele,i,j,c,k,l;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the ele...\n ");
	for(i=0;i<ele;i++)
	scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		for(j=i+1,c=1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)

				{
					a[k]=a[k+1];
				}
				c++;
				ele--;
				j--;
			}

		}
			printf(" %d is present%d  times\n",a[i],c);
}


}
