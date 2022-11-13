#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j;
	printf("Enter the string");
	scanf("%s",s);
	printf("Enter the character");
	scanf(" %c",&ch);
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
{
	for(j=i;s[j];j++)
		{
			s[j]=s[j+1];
		}
	}
	}
	printf("%s",s);

}
