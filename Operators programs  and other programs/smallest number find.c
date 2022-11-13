#include<stdio.h>
void main(){
	int n,a[5],i;
	printf("Enter number\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(n=a[0],i=1;i<5;i++)
	{
		if(a[i]<5)
			n=a[i];
	}
	printf("%d",n);
}
