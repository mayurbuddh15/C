#include<stdio.h>
void main(){
	int i,j,k,l=1;
	for(i=1;i<5;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%d",l);
		}
		for(k=1;k<i;k++)
		{
			printf("*%d",l);
		}l++;
		printf("\n");
	}
}
