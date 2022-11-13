#include<stdio.h>
void main()
{
int i,j,k=10;
for(i=1;i<6;i++)
{
for(j=0;j<i;j++)
	if(j<=i||j>=k)
		printf("%d",i);
	else
	printf(" ");
k--;
printf("\n");
}


}
