#include<stdio.h>
void main()
{
	int a[5],ele,elem,i,j,c=0,k[5],m,z=0;
	ele=sizeof(a)/sizeof(a[0]);
//	elem=sizeof(k)/sizeof(k[0]);
		printf("Enter the element...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				break;
			}
		}
		if(a[i]==j)
		{
			//printf("%d ",a[i]);
			c++;
                        k[z++]=a[i];
			}
		}
        for(i=0;i<z;i++)
        printf("k=%d ",k[i]);
	printf("count=%d",c);	
      }

