#include<stdio.h>
void main()
{
	int i,j,k,num;
//	printf("Enter the number");
//	scanf("%d",&num);
	for(i=1;i<6;i++)
	{

		for(j=0;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("%d",k);
		}
		printf("\n");

	}

	for(i=4;i>0;i--)
	{

		for(j=0;j<=7-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("%d",k);
		}
 		printf("\n");

}
}
