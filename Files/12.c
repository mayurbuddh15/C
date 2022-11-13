#include<stdio.h>
#include<stdlib.h>
struct st{
	int r;
	char n[20];
	float m;
};
int length(char *p);
void main(int argc,char **argv)
{
	struct st **p;
	FILE *fp;
	int n,i;
	if(argc!=2)
	{
	printf("Usage:./a.out file name\n");
	return;
	}
	printf("Entr the no\n");
	scanf("%d",&n);
	p=malloc(sizeof(struct st *)*n);
	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));
	for(i=0;i<n;i++)
	{
		printf("Enter the R.no name and marks of student\n");
		scanf("%d %s %f",&p[i]->r,p[i]->n,&p[i]->m);
	}
	for(i=0;i<n;i++)
	{
		if((length(p[i]->n))>3)
		{
			fp=fopen(argv[1],"w");
		fprintf(fp,"%d %s %f",p[i]->r,p[i]->n,p[i]->m);
		}
	}
fclose(fp);
}
int length(char *p)
{
	int i=0;
	for(i=0;p[i];i++);
	return i;
}
