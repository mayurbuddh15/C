#include<stdio.h>
void main()
{
	char a[5];
	int ele,i,j,k,m;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the characters\n");
	for(i=0;i<ele;i++)
	{
		scanf(" %c",a+i);
	}
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
                         {
			for(k=i;k<ele;k++)
                         {
                         a[k]=a[k+1];
                         }                         
                         ele--;i--;
			}
		}
	}

		for(m=0;m<ele;m++)
		{
			printf("%c ",a[m]);
}
printf("\n");
		}
