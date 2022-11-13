#include<stdio.h>
struct st 
{
	int rollno;
	char s[20];
	float marks;
};
void main()
{
	struct st s[3];
	int i,ele;
	ele=sizeof(s)/sizeof(s[3]);
	for(i=0;i<ele;i++)
	{
		printf("Enter the rollno\n");
		scanf("%d",&s[i].rollno);
		printf("Enter the name\n");
		scanf("%s",s[i].s);
		printf("Enter the marks\n");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<ele;i++)
	{
	printf("%d %s %f\n",s[i].rollno,s[i].s,s[i].marks);
	}
}
