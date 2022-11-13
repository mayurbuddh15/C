#include<stdio.h>
#include<stdlib.h>
struct st
{
	int R;
	char ch[20];
	float f;
};
void main()
{
	struct st **p;
	int i,n;
	printf("Enter the no\n");
	scanf("%d",&n);
	p=malloc(sizeof(struct st*)*n);
	for(i=0;i<n;i++)
	{
	p[i]=malloc(sizeof(struct st));
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the R\n");
		scanf("%d",&p[i]->R);
		printf("Enter the name\n");
		scanf("%s",p[i]->ch);
		printf("Enter the marks\n");
		scanf("%f",&p[i]->f);
	}
for(i=0;i<n;i++)
printf("%d %s %f",p[i]->R,p[i]->ch,p[i]->f);

}
