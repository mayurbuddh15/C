#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],*t;
	int ele,i,j;
	char *p[5];
	ele=sizeof(s)/sizeof(s[0]);

	for(i=0;i<ele;i++)
		scanf("%s",s[i]);
	printf("before sorting using array\n");
	for(i=0;i<ele;i++)
		p[i]=s[i];
	for(i=0;i<ele;i++)
		printf("%s",s[i]);

	printf("before sorting using pointer\n");
	printf("-------------------------------------");
	for(i=0;i<ele;i++)
		printf("%s\n",p[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	printf("after scanig using array...\n");

	for(i=0;i<ele;i++)
	printf("%s\n",p[i]);


}
