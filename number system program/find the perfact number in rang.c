#include<stdio.h>
void main(){
	int n,i,s,j;
	//	printf("Enter the number\n");
	//	scanf("%d",&n);
	for(j=1;j<500;j++)
	{
		for(i=1,s=0;i<j;i++)
		{
			if(j%i==0)
			{
				s=s+i;
			}
		}
	
	if(s==j)
	{
		printf("s=[%d]",s);
	}
}
}
