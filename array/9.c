#include<stdio.h>
void main()
{
	int a[5],p=0,ele,c,i,j,k,b[5],x=0;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the ele....\n");
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele-1;i++)
	{
		for(c=1,j=i+1;j<ele;j++)
		{

			if(a[i]==a[j])
			{
			
				if(c==1)
				{
					b[x]=a[i];
				//printf("%d ",b[x]);
					
					x++;
				}
				c++;
				for(k=j;k<ele;k++)
				a[k]=a[k+1];
				//ele--;
				/*for(k=i;k<ele;k++)
				  {
				  a[k]=a[k+1];
				  }*/
			
			}
		}
		if(c<=2)
		{		
			for(j=0;j<;j++)
			{
				if(a[i]!=a[j])
				{
					printf("%d comes %d times \n",a[i],c);
				}	
				else if(c>1)
				{
					printf("%d comes %dtimes \n",a[i],c);
				}
				if(a[i]==a[j])
					continue;
			}
		}

	}
}

