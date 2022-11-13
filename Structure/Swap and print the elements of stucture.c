#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st{
	int r;
	char s[20];
	float M;
};
void swap(struct st **p,int);
void print(struct st **,int );
void main()
{
	struct st **p;
	int n,i;
	printf("Enter the numbers\n");
	scanf("%d",&n);
	p=malloc(sizeof(struct st*)*n);
	for(i=0;i<n;i++)
	{
		p[i]=malloc(sizeof(struct st));
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the R.no\n");
		scanf("%d",&p[i]->r);
		printf("Enter the name\n");
		scanf("%s",p[i]->s);
		printf("Enter the marks\n");
		scanf("%f",&p[i]->M);
	}
	swap(p,n);
	print(p,n);
}
void print(struct st **p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d %s %f\n",p[i]->r,p[i]->s,p[i]->M);
	}
}
void swap(struct st **p,int n)
{
	int i,j;
	struct st temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((p[j]->r)>(p[j+1]->r))
			{
				temp.r=p[j]->r;
				p[j]->r=p[j+1]->r;
				p[j+1]->r=temp.r;
			}
		}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((p[j]->s)>(p[j+1]->s))
			{
			/*	temp.M=p[j]->M;
				p[j]->M=p[j+1]->M;
				p[j+1]->M=temp.M;*/
				strcpy(temp.s,p[j]->s);
				strcpy(p[j]->s,p[j+1]->s);
				strcpy(p[j+1]->s,temp.s);
			}
		}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((p[j]->M)>(p[j+1]->M))
			{
				temp.M=p[j]->M;
				p[j]->M=p[j+1]->M;
				p[j+1]->M=temp.M;
			}
		}
}

