#include<stdio.h>
void main(){
	int num,i,r,s,n1;
	//printf("Enter the number\n");
	//scanf("%d",&num);
	for(i=1;i<1000;i++)
	{
		for(n1=i,s=0;n1;n1/=10)
		{
			r=n1%10;
			s=s*10+r;
		}
		if(s==i)
		{
			printf("%d, ",s);
		}
	}
}
