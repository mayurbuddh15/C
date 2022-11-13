#include<stdio.h>
void main()
{
	int s,m,a,n,n1,i;
//	printf("Enter the number");
//	scanf("%d",&n);
	for(i=1;i<1000;i++)
{
		for(n1=i,s=0;n1;n1=n1/10)
		{
			a=n1%10;
			for(m=1;a>=1;a--)
			{
				m=m*a;
			}
			s=m+s;
		}
	if(s==i)
	printf("%d ",s);
	
}

}
