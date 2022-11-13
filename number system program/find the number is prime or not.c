#include<stdio.h>
void main(){
	int n,i,c;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2,c=0;i<n;i++)
	{
		if(n%i==0)
		break;
	}
	if(n==i)
		printf("prime\n");
	else
		printf("not prime\n");
}
