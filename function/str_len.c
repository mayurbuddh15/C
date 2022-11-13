#include<stdio.h>
int str_len(const char*);
void main()
{
	char s[20];
	int c;
	printf("Enter the string");
	scanf("%s",s);
	c=str_len(s);
	printf("%d",c);
}
int str_len(const char*q)
{
	int i;
	for(i=0;q[i];i++);
	return i;
}
