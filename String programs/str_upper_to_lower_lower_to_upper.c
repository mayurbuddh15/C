#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("Enter the string");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]!=32)
		{
			s[i]=s[i]^32;
		}
	}
	printf("%s\n",s);
}
