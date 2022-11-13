#include<stdio.h>
void main(){
int i;
printf("Enter the number\n");
scanf("%d",&i);
if(i%2==0)
{
	if((i&(i-1))==0)
	{
	printf("power of 2\n");
	}
	else
	printf("even\n");
}
else
printf("not power of 2\n");
}
