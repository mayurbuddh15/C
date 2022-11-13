#include<stdio.h>
#include<stdlib.h>
void main()
{
	int r,c,**p,j,i;
	printf("Enetr the row and coloum\n");
	scanf("%d %d",&r,&c);
	p=malloc(sizeof(int *)*r);

	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int *)*c);

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			printf("%d",p[i][j]);
}
