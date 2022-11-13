#include<stdio.h>
void main(){
	int i,j,num,m,n;
	printf("Enter the number\n");
	scanf("%d",&num);

	for(j=31;j>=0;j--){
		printf("%d",num>>j&1);
	}
	printf("\n");
	for(i=0,j=4;i<4;i++,j++)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n){
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	for(j=31;j>=0;j--){
		printf("%d",num>>j&1);
	}
	printf("\n");
}
