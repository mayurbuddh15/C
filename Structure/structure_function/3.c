#include<stdio.h>
struct m1
{
	int rollno;
	char name[10];
	float marks;
};
void hello(struct m1 *);
void main()
{
	struct m1 a[3];
	hello(&a[3]);
}

void hello(struct m1 *p)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the R AND N AND M ");
		scanf("%d%s%f",&p[i].rollno,p[i].name,&p[i].marks);

	}
	for(i=0;i<3;i++)
	{
		printf("%d %s %f",p[i].rollno,p[i].name,p[i].marks);
	}
}
