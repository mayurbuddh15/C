#include<stdio.h>
void main()
{
	char s[50];
	int i,c,j,k,m=0;
	printf("Enter the string");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==32&&s[i+1]==32)
		{
			m=1;
			break;
		}
	}
		for(j=i+2,c=1;s[j];j++)
		{
			if(s[j]==32&&s[j+1]!=32)
				c++;
		}
		printf("%d",c);
}
