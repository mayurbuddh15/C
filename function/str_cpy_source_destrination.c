#include<stdio.h>
void str_cpy(const char *,char *);
void main()
{
	char s[20],d[20];
	printf("Enter the string");
	scanf("%s",s);
	str_cpy(s,d);
}
void str_cpy(const char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		q[i]=p[i];
	}
	q[i]='\0';
	printf("%s",q);
}
