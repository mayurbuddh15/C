#include<stdio.h>
void main(){
	int a=0,b=1,c,n;
	printf("Enetr the number\n");
	scanf("%d",&n);
	printf("%d %d",a,b);
	c=a+b;
//	printf(" %d ",c);
	while(c<n)
	{
		b=a;
		a=c;
		c=a+b;
		printf(" %d ",c);
	}
}
