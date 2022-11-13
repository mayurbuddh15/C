#include<stdio.h>
void main()
{
	char s[50];
	int i,j;
	printf("Enter the string\t");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==32&&s[i+1]==32)
	{	for(j=i;s[j];j++)
		{	
		s[j]=s[j+1];
		}i--;
	}
	
}	printf("%s",s);
	printf("\n");
}
