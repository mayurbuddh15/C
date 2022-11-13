#include<stdio.h>
void main(){
int num,i,n1,k,s,r;
printf("Enter the number\n");
scanf("%d",&num);
for(n1=num,k=0,i=1;n1!=0;n1=n1/10)
{s=1;
	r=n1%10;
	printf("r=%d\n",r);		
	while(r!=0)
	{
	s=s*r;
	printf("s=%d ",s);
	r--;
	}
k=k+s;
}
if(k==num)
printf("strong number\n");
else
printf("not strong number\n");
}
