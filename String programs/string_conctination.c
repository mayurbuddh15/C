#include<stdio.h>
void main()
{
	char s[50],b[20];
	int i,j;
	printf("Enter two strings\n");
	scanf("%s %s",s,b);
	for(i=0;s[i];i++);
	for(j=0;b[j];j++)
			s[i++]=b[j];
		        s[i]=b[j];
	
	printf("%s\n",s);
}
