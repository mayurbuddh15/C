#include<stdio.h>
void main(){
	int i,j,k,l=1;
	for(i=1;i<5;i++)
	{
		for(j=0;j<2*i-1;j++)
		{
			printf("%d",l);
			printf("*");
			
		}l++;
		printf("\n");
	}
}
